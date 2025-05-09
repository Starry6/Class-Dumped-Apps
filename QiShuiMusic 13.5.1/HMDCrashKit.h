@interface HMDCrashKit : NSObject
@property (nonatomic) NSDictionary extraMetaData;
@property (nonatomic) HMDCrashUploader uploader;
@property (nonatomic) NSString commitID;
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) double launchCrashThreshold;
@property (nonatomic) BOOL lastTimeCrash;
@property (nonatomic) @ networkProvider;
@property (nonatomic) NSObject<OS_dispatch_queue> dynamicDataQueue;
@property (nonatomic) Q lastCrashUsedVM;
@property (nonatomic) Q lastCrashTotalVM;
@property (nonatomic) <HMDCrashKitDelegate> delegate;
- (unsigned long long)lastCrashUsedVM;
- (void)setNeedEncrypt:;
- (id)commitID;
- (id)dynamicDataQueue;
- (id)extraMetaData;
- (unsigned long long)lastCrashTotalVM;
- (BOOL)lastTimeCrash;
- (double)launchCrashThreshold;
- (BOOL)needEncrypt;
- (void)removeDynamicValue:;
- (void)setCommitID:;
- (void)setDynamicDataQueue:;
- (void)setDynamicValue:key:;
- (void)setExtraMetaData:;
- (void)setLastCrashTotalVM:;
- (void)setLastCrashUsedVM:;
- (void)setLastTimeCrash:;
- (void)setLaunchCrashThreshold:;
- (void)setUploader:;
- (void)syncDynamicValue:key:;
- (id)uploader;
- (id)init;
- (void)setDelegate:;
- (void)setup;
- (id)delegate;
- (void).cxx_destruct;
- (id)sdkVersion;
- (void)setNetworkProvider:;
- (id)networkProvider;
- (void)setSdkVersion:;
+ (id)extraMetaData;
+ (void)setExtraMetaData:;
+ (id)sharedInstance;
@end
