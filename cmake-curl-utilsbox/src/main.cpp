#include <iostream>
#include <curl/curl.h>
#include <utilsbox.h>

using namespace std;

FILE *fp;

int write_data(void *ptr, size_t size, size_t nmemb, void *stream)
{
	int written = fwrite(ptr, size, nmemb, (FILE *)fp);
	return written;
}

int main(int argc, char** argv)
{
	const char * path = "/tmp/curl-test";
	const char * mode = "w";
	fp=fopen(path, mode);
	curl_global_init(CURL_GLOBAL_ALL);
	CURLcode res;

	CURL *curl = curl_easy_init();
	if(!curl) {
		cout << "curl init error."<< argc<< endl;
		return -1;
	}

	curl_easy_setopt(curl, CURLOPT_URL, "https://cmake.org/");
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
	curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);
	res = curl_easy_perform(curl);

	cout << "curl res:" << res << endl;
	curl_easy_cleanup(curl);

	cout << UtilsBox::format("UtilsBox version:%s",UtilsBox::GetVersion().c_str())<< endl;

	return 0;
}
