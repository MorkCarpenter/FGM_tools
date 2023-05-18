#define _CRT_SECURE_NO_WARNINGS 1
#include"fgm_getline.h"
int getline(char** str, size_t* str_len, FILE* stream) {
	char tmp_str[129];
	while (1) {
		(*str) = (char*)realloc(*str, sizeof(char) * ((*str_len) + 130));
		if(*str==NULL){
			return -1;
		}
		memset(*str + (*str_len), 0, sizeof(char) * 128);
		fgets(tmp_str, 129, stream);
		for (int i = 0; i < 128; ++i) {
			if (tmp_str[i] == '\n' || tmp_str[i] == 0) {
				(*str)[(*str_len)] = 0;
				return 0;
			}
			(*str)[(*str_len)++] = tmp_str[i];
		}
	}
	return -1;
}