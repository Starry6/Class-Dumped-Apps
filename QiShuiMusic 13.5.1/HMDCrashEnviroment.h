@interface HMDCrashEnviroment : NSObject
+ (id)currentMetaData;
+ (id)kernelOSVersion;
+ (void)createFileEnvironment;
+ (void)setupAsyncUtil;
+ (void)writeMetadata;
+ (void)setup;
+ (id)metaDict;
@end
