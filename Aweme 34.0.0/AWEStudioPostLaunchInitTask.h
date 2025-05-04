@interface AWEStudioPostLaunchInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)configPassthroughVideoEditorAB;
+ (unsigned long long)availableMemory;
+ (double)getTotalDiskSize;
+ (id)volumeString;
+ (void)enbleUploadNativeLogIfNeeded;
+ (void)configTrackerWithDeviceID:;
+ (void)collectionDeviceInfo;
+ (void)configEffectJSSDK;
+ (void)configBizAB;
+ (void)configVideoEditorAB;
+ (void)p_configVideoEditorAB;
+ (void)launchIdleStudioTask;
+ (void)configUserDefaultsAB;
+ (id)getGLRenderString;
+ (double)_sysctlCGFloatForKey:;
+ (void)execute;
+ (void)setup;
@end
