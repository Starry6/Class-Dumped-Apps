@interface AWEIMBasicCoreSDKConfig : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) double currentFreeDiskSpace;
- (double)freeDiskSpace;
- (id)getGlobalConfig;
- (void)p_getFreeDiskSpace;
- (void)setCurrentFreeDiskSpace:;
- (id)aAWEIMModuleConfigAdapterProtocol;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)p_modifiedGroupTypesEnabledInFoldBox;
- (id)p_lcMessageHandleAllowedSourceArray;
- (double)currentFreeDiskSpace;
- (id)init;
- (id)serialQueue;
- (void)setSerialQueue:;
- (void).cxx_destruct;
- (id)getOptions:;
+ (id)imServerURL;
+ (Class)aAWEIMModuleConfigAdapterProtocolClass;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)sharedInstance;
@end
