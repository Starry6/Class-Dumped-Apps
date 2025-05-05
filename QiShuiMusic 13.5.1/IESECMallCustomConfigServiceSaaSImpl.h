@interface IESECMallCustomConfigServiceSaaSImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableOptReport;
+ (double)deviceOverallScore;
+ (id)ecomPrefetchConfig;
+ (long long)enableFetchHomePageFirst;
+ (BOOL)enableFirstScreenStraightOut;
+ (BOOL)enableOptLynxMonitor;
+ (long long)enableOptLynxPreloader;
+ (BOOL)enableRegisterLiveAccessKey;
+ (id)geckoResourceChannel;
+ (unsigned long long)lynxCardThreadStrategy;
+ (BOOL)lynxCardUseForest;
+ (id)mallBundleConfigUrl;
+ (BOOL)mallClientParamsTypeSupport;
+ (BOOL)mallListDisableTriggerAppearWhenListUpdater;
+ (BOOL)mallListUsePerformUpdatesForListModelUpdate;
+ (long long)mallLoadmoreRangesize;
+ (long long)pageCardDynamicParamTimeout;
+ (id)pageCardLynxSchema;
+ (id)removeStorageConfigV2;
+ (double)updateListWithDelayJump;
+ (id)accessKey;
@end
