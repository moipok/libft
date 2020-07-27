/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:16:25 by fbarbera          #+#    #+#             */
/*   Updated: 2020/05/21 05:29:17 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN  "\033[1;32m"
#define ORANGE  "\033[1;33m"
#define WHITE   "\033[1;37m"

char    *ft_newstr(char const *s, char c);

void test_newstr(void)
{
	char a[30] = "0000asas0000s0as0.00000\0";
	char b[20] = "s";
	char *s = ft_newstr(a, '0');
	char *s1 = ft_newstr(b, '0');
	printf("str = %s, new = %s \n",a ,s);
	printf("str = %s, new = %s \n",b ,s1);


}
void testatoi(void)
{
        char a1[30] = "       12345l";
        char a[30] = "-2147483648";
        char a2[30];
        int b;
        b = atoi(a);
        printf("%d\n", b);
        printf("%d\n", ft_atoi(a));
        for (int i = 0; i < 25; i++)
        {
                a2[i] = '2';
                a2[i+1] = '\0';
                b = atoi(a2);
                printf("%d       =      %s\n",b ,a2);
                printf("%d       =      %s\n",ft_atoi(a2) ,a2);

        }
}

void	testmem(void);

int	main(void)
{
	int a,b;
	printf("%s----------------------------isalpha------------------------%s\n",RED, RESET);
	for (int i = -256; i < 256; i++)
	{
		a = isalpha(i);
		b = ft_isalpha(i);
		if ((a > 0) && (b > 0))
		        printf("%sisalpha = %d, ft_isalpha = %d ('%c', %d)\n%s", GREEN, a, b, i, i, RESET);
		else if (a != b)
		        printf("%sisalpha = %d, ft_isalpha = %d ('%c', %d)\n%s",RED, a, b, i, i, RESET);
	}
	printf("%s----------------------------isgigit------------------------%s\n",RED, RESET);
	for (int i = -256; i < 256; i++)
	{
		a = isdigit(i);
		b = ft_isdigit(i);
		if ((a > 0) && (b > 0))
			printf("%sisdigit = %d, ft_isdigit = %d ('%c', %d)\n%s", GREEN, a, b, i, i, RESET);
		else if (a != b)
			printf("%sisdigit = %d, ft_isdigit = %d ('%c', %d)\n%s",RED, a, b, i, i, RESET);
	}
	printf("%s----------------------------isalnum------------------------%s\n",RED, RESET);
	for (int i = -256; i < 256; i++)
	{
		a = isalnum(i);
		b = ft_isalnum(i);
		if ((a > 0) && (b > 0))
			printf("%sisalmun = %d, ft_isalmun = %d ('%c', %d)\n%s", GREEN, a, b, i, i, RESET);
		else if (a != b)
			printf("%sisalmun = %d, ft_isalmun = %d ('%c', %d)\n%s",RED, a, b, i, i, RESET);
	}
	printf("%s----------------------------isascii------------------------%s\n",RED, RESET);
	for (int i = -500; i < 500; i++)
	{
		a = isascii(i);
		b = ft_isascii(i);
		if ((a > 0) && (b > 0))
	            printf("%sisascii = %d, ft_isascii = %d ('%c', %d)\n%s", GREEN, a, b, i, i, RESET);
		else if (a != b)
	      		printf("%sisascii = %d, ft_isascii = %d ('%c', %d)\n%s",RED, a, b, i, i, RESET);
	}
	printf("%s----------------------------isprint------------------------%s\n",RED, RESET);
	for (int i = -500; i < 500; i++)
	{
	        a = isprint(i);
	        b = ft_isprint(i);
	        if ((a > 0) && (b > 0))
	            printf("%sisprint = %d, ft_isprint = %d ('%c', %d)\n%s", GREEN, a, b, i, i, RESET);
	        else if (a != b)
	                printf("%sisprint = %d, ft_isprint = %d ('%c', %d)\n%s",RED, a, b, i, i, RESET);
	}
	printf("%s----------------------------toupper------------------------%s\n",RED, RESET);
	for (int i = -500; i < 500; i++)
	{
	        a = toupper(i);
	        b = ft_toupper(i);
	        if ((a != i) && (a == b))
			printf("%stoupper = %c, ft_toupper = %c ('%c', %d)\n%s", GREEN, a, b, i, i, RESET);
	        else if (a != b)
	        	printf("%stoupper = %c, ft_toupper = %c ('%c', %d)\n%s",RED, a, b, i, i, RESET);
	}
	printf("%s----------------------------tolower------------------------%s\n",RED, RESET);
	for (int i = -500; i < 500; i++)
	{
	        a = tolower(i);
	        b = ft_tolower(i);
	        if ((a != i) && (a == b))
	                printf("%stolower = %c , %d, ft_tolower = %c, %d ('%c', %d)\n%s", GREEN, a, a, b, b, i, i, RESET);
	        else if (a != b)
	                printf("%stolower = %c , %d, ft_tolower = %c, %d ('%c', %d)\n%s",RED, a, a, b, b, i, i, RESET);
	}
	printf("%s------------------------------FT_STRLEN-------------------------- %s\n", RED, RESET);
	int flag = 0;
	char    *s = "12345rereerererererrekdfsgmoksmgorepmgoewpmgopwmgoemgwo6\0";
	a = strlen(s);
	b = ft_strlen(s);
	if (a != b) flag++;
	printf("strlen = %d, ft_strlen = %d \n", a, b);
	char c[0];
	a = strlen(c);
        printf("strlen = %d", a);
        b = ft_strlen(c);
	if (a != b) flag++;
        printf(", ft_strlen = %d \n", b);
	if (flag) printf("%s [X]  %s\n\n", RED, RESET);
	else printf("%s [+] %s\n\n", GREEN, RESET);

	printf("%s------------------------------FT_STRLCPY-------------------------- %s\n", RED, RESET);
	char src[100] = "1234568901234567890123456789012345678901234567890";
	char src0[100] = "";
	char dst[100];
	char dst2[100];
	for (int l = -3; l < 15; l++)
	{
		a = strlcpy(dst, src, l);
		b = ft_strlcpy(dst2, src, l);
		if ((strcmp(dst, dst2) == 0) && (a == b))
		{
		printf("%sdst  = %s	strlcpy		= %d, size = %d\n", GREEN, dst, a, l);
		printf("dst2 = %s	ft_strlcpy	= %d, size = %d%s\n", dst2, b, l, RESET);
		}
		else
		{
                printf("%sdst  = %s     strlcpy         = %d, size = %d\n", RED, dst, a, l);
                printf("dst2 = %s       ft_strlcpy      = %d, size = %d%s\n", dst2, b, l, RESET);
		}
	}
        a = strlcpy(dst, src0, 3);
        b = ft_strlcpy(dst2, src0, 3);
        printf("dst  = %s       strlcpy         = %d, size = %d\n", dst, a, 3);
        printf("dst2 = %s       ft_strlcpy      = %d, size = %d\n", dst2, b, 3);
        printf("%s------------------------------FT_STRLCAT-------------------------- %s\n", RED, RESET);
	for (int i = -1; i < 20; i++)
	{
	char srccat[100] = "1234567890";
	char dstcat[100] = "ABCDE";
	char dstcat2[100] = "ABCDE";
		a = strlcat(dstcat, srccat, i);
		b = ft_strlcat(dstcat2, srccat, i);
		if ((strcmp(dstcat, dstcat2) == 0) && (a == b))
		{
			printf("%sdst  = %s		strlcat		= %d, size = %d\n",GREEN, dstcat, a, i);
			printf("dst2 = %s		ft_strlcat	= %d, size = %d%s\n",dstcat2, b, i, RESET);
		}
		else
		{
                        printf("%sdst  = %s		strlcat		= %d, size = %d\n",RED, dstcat, a, i);
                        printf("dst2 = %s		ft_strlcat	= %d, size = %d%s\n", dstcat2, b, i, RESET);
		}
	}
        printf("%s------------------------------FT_STRCHR-------------------------- %s\n", RED, RESET);
	char ca = '5';
	char cb = 'A';
	char *achar;
	char *bchar;
	char srs[20] = "1234567890";
	achar = strchr(srs, ca);
	bchar = ft_strchr(srs, ca);	
	if (achar == bchar) {
	printf("%ssrc  = %s		strchr         = %s, size = %c\n",GREEN, srs, achar, ca);
	printf("src  = %s		ft_strchr      = %s, size = %c%s\n",srs, bchar, ca, RESET);
	}
	else
	{
	printf("%ssrc  = %s		strchr         = %s, size = %c\n",RED, srs, achar, ca);
	printf("src  = %s		ft_strchr      = %s, size = %c%s\n",srs, bchar, ca, RESET);
	}
	achar = strchr(srs, cb);
	bchar = ft_strchr(srs, cb);
	if (achar == bchar) {
	printf("%ssrc  = %s		strchr         = %s, size = %c\n",GREEN, srs, achar, cb);
	printf("src  = %s		ft_strchr      = %s, size = %c%s\n",srs, bchar, cb, RESET);
	}
	else
	{
	printf("%ssrc  = %s		strchr         = %s, size = %c\n",RED, srs, achar, cb);
	printf("src  = %s		ft_strchr      = %s, size = %c%s\n",srs, bchar, cb, RESET);
	}
	achar = strchr(srs, '\0');
        bchar = ft_strchr(srs, '\0');
	if (achar == bchar) {
        printf("%ssrc  = %s		strchr         = %s, size = '\\0'\n",GREEN, srs, achar);
        printf("src  = %s		ft_strchr      = %s, size = '\\0'%s\n",srs, bchar, RESET);
	}
	else
	{
        printf("%ssrc  = %s		strchr         = %s, size = '\\0'\n",RED, srs, achar);
        printf("src  = %s		ft_strchr      = %s, size = '\\0'%s\n",srs, bchar, RESET);
	}
	        printf("%s------------------------------FT_STRRCHR-------------------------- %s\n", RED, RESET);
        char car = '5';
        char cbr = 'A';
        char *acharr;
        char *bcharr;
        char srsr[20] = "12345675890";
        acharr= strrchr(srsr, car);
        bcharr = ft_strrchr(srsr, car);
        if (acharr == bcharr) {
        printf("%ssrc  = %s		strrchr         = %s, size = %c\n",GREEN, srsr, acharr, car);
        printf("src  = %s		ft_strrchr      = %s, size = %c%s\n",srsr, bcharr, car, RESET);
        }
        else
        {
        printf("%ssrc  = %s		strrchr         = %s, size = %c\n",RED, srsr, acharr, car);
        printf("src  = %s		ft_strrchr      = %s, size = %c%s\n",srsr, bcharr, car, RESET);
        }
        acharr = strrchr(srsr, cbr);
        bcharr = ft_strrchr(srsr, cbr);
        if (acharr == bcharr) {
        printf("%ssrc  = %s		strrchr         = %s, size = %c\n",GREEN, srsr, acharr, cbr);
        printf("src  = %s		ft_strrchr      = %s, size = %c%s\n",srsr, bcharr, cbr, RESET);
        }
        else
        {
        printf("%ssrc  = %s		strrchr         = %s, size = %c\n",RED, srsr, acharr, cbr);
        printf("src  = %s		ft_strrchr      = %s, size = %c%s\n",srsr, bcharr, cbr, RESET);
        }
        acharr = strrchr(srsr, '\0');
        bcharr = ft_strrchr(srsr, '\0');
        if (acharr == bcharr) {
        printf("%ssrc  = %s		strrchr         = %s, size = '\\0'\n",GREEN, srsr, acharr);
        printf("src  = %s		ft_strrchr      = %s, size = '\\0'%s\n",srsr, bcharr, RESET);
        }
        else
        {
        printf("%ssrc  = %s		strrchr         = %s, size = '\\0'\n",RED, srsr, acharr);
        printf("src  = %s		ft_strrchr      = %s, size = '\\0'%s\n",srsr, bcharr, RESET);
        }
	
	printf("%s------------------------------FT_STRNSTR-------------------------- %s\n", RED, RESET);
	char big[50] = "lalala vnfdjkn 1235 text nana";
	char little1[10] = "1235";
	char little2[10] = "text";
	char little3[10] = "";
	printf("strnstr(big, little1, 0) = %s \n", strnstr(big, little1, 0)); 
	for (int i = -1; i < 30; i++)
	{
	char *aaaaa = strnstr(big, little1, i);
	char *bbbbb = ft_strnstr(big, little1, i);
	if (aaaaa == NULL || bbbbb == NULL)
		printf("%s", ORANGE);
	else if (strcmp(aaaaa, bbbbb) == 0)
		printf("%s", GREEN);
	else
		printf("%s", RED);
	printf("text = %s,	strnstr    = %s,		find = %s	i = %d \n", big, strnstr(big, little1, i), little1, i);
	printf("text = %s,	ft_strnstr = %s,		find = %s 	i = %d\n", big, ft_strnstr(big, little1, i), little1, i);
	printf("%s", RESET);
	}
	printf("text = %s,	strnstr    = %s,	find = %s \n", big, strnstr(little3, little3, 4), little3);
//	printf("text = %s,	ftint     ft_setmass(char const *s, char c, int row)
//_strnstr = %s,	find = %s \n", big, ft_strnstr(little3, little3, 4), little3);
	printf("%s------------------------------FT_STRNCMP-------------------------- %s\n", RED, RESET);
	char *aaaaa = strnstr(big, little1, 0);
	char *bbbbb = ft_strnstr(big, little1, 0);
	//printf("ft_strncmp(NULL, NULL, 4) = %d\n", ft_strncmp(aaaaa, bbbbb, 4)); // seg fault
	char test[5][10] = {"1234444","1234567","","12000","24"};
	for (int i = -2; i < 10; i++)
	{
		if (strncmp(test[0], test[1], i) == ft_strncmp(test[0], test[1], i))
			printf("%s [%d] %s", GREEN, ft_strncmp(test[0], test[1], i), RESET);
		else
			printf("%s [-] %s", RED, RESET);
	}
	printf("\n");
	for (int i = -2; i < 10; i++)
	{
		if (strncmp(test[0], test[3], i) == ft_strncmp(test[0], test[3], i))
			printf("%s [%d] %s", GREEN, ft_strncmp(test[0], test[3], i), RESET);
		else
			printf("%s [-] %s", RED, RESET);
	}
	printf("\n");
	printf("%s------------------------------FT_ATOI-------------------------- %s\n", RED, RESET);
	testatoi();
	printf("%s------------------------------FT_MEMSET-------------------------- %s\n", RED, RESET);
       //	memtest();
	char ds[20] = "5555555";
	char sr[10] = "123";
	char *r = (char *)memmove(ds, sr, 10);
	printf("str = 123 ds = 5555555 n=10 memmove = %s\n", r);
	
//	char ds1[20] = "5555555";
//	char sr1[10] = "123";
//	char *d = (char *)memmove(sr1, ds1, 1);
//	printf("ds = 123 sr = 5555555 n=10 memmove = %s\n", d);
//	char *ddd = (char *)ft_memmove(sr1, ds1, 1);
//	printf("ds = 123 sr = 5555555 n=10 memmove = %s\n", ddd);
//	char ds2[20] = "5555555";
//	char sr2[10] = "123";
//	char *d2 = (char *)memmove(sr2, ds2, -1);
//	printf("ds = 123 sr = 5555555 n=10 memmove = %s\n", d2);
//	char *ddd2 = (char *)ft_memmove(sr2, ds2, -1);
//	printf("ds = 123 sr = 5555555 n=10 memmove = %s\n", ddd2);
	printf("AAAAAAAAAAAAAAAA\n");

	int lll = -12345;
	printf("%s = %d\n", ft_itoa(lll), lll);
	lll = 12345;
	printf("%s = %d\n", ft_itoa(lll), lll);
	printf("%s = %d\n", ft_itoa(0), 0);
	lll = -2147483648;
	printf("%s = %d\n", ft_itoa(lll), lll);
	char str22[40] = "lololo\0";
	char **ss2;
	int i = 0;
	test_newstr();
	ss2 = ft_split(str22, '0');
	printf("str = %s \n", str22);
	while (ss2[i])
	{
		printf("%s \n", ss2[i]);
		i++;
	}
        char str21[40] = "1230123456701234012344444444440a0\0";
        char **ss;
        i = 0;
        ss = ft_split(str21, '0');
        printf("str = %s \n", str21);
        while (ss[i])
        {
                printf("%s \n", ss[i]);
                i++;
        }
	char str23[40] = "00\0";
        char **ss3;
        i = 0;
        ss3 = ft_split(str23, '0');
        printf("str = %s \n", str23);
        while (ss3[i])
        {
                printf("%s \n", ss3[i]);
                i++;
        }

	return (0);
}
