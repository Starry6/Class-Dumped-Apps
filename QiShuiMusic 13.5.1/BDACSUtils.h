@interface BDACSUtils : NSObject
+ (id)AES128GCMDecryptData:key:error:;
+ (id)AES128GCMEncryptData:key:error:;
+ (id)createZipFileAndDeleteDir:;
+ (id)getMetricFromStartTime:createZipDoneTime:readZipDoneTime:zipSize:;
+ (id)rootDirPath;
+ (void)uploadDirectory:limitSize:url:success:failed:;
+ (id)serialQueue;
+ (id)concurrentQueue;
@end
