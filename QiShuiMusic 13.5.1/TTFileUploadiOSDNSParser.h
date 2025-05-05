@interface TTFileUploadiOSDNSParser : NSObject
+ (void)setDnsHostString:dnsGoogleHost:;
+ (id)dnsTTHostString;
+ (id)dnsGoogleHostString;
+ (id)getIpWithHost:parserType:backUpType:result:;
+ (id)getIpWithHost:result:;
+ (id)getItemInfoWithHost:parserType:backUpType:result:;
+ (id)getItemInfoWithHost:result:;
+ (void)setUpBackupDNSParserWaitTime:;
+ (void)setUpDNSTTL:;
+ (void)setUpFirstDNSParseType:;
+ (void)setUpMainDNSParseType:backupParseType:;
@end
