@interface AVMDLiOSDNSParser : NSObject
+ (void)removeDNSCache:;
+ (void)setNetClientV1:;
+ (void)cancelParser:;
+ (void)clearAllDNSCache;
+ (id)getIpWithHost:parserType:result:;
+ (id)getIpWithHost:result:;
+ (id)getItemInfoWithHost:parserType:result:;
+ (id)getItemInfoWithHost:result:;
+ (id)getNetClient;
+ (id)getNetClientV1;
+ (void)processHiJack;
+ (id)refreshItemInfoWithHost:parserType:result:;
+ (void)setCustomHttpDNS:;
+ (void)setNetClient:;
+ (void)setUpBackupDNSParserWaitTime:;
+ (void)setUpDNSEnableParallel:;
+ (void)setUpDNSEnableRefresh:;
+ (void)setUpDNSTTL:;
+ (void)setUpEnableLocalDNSThreadOptimize:;
+ (void)setUpEnableNoLockNotify:;
+ (void)setUpFirstDNSParseType:;
+ (void)setUpFirstDNSParseType:backup:;
@end
