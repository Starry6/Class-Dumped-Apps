@interface AWEInteractionPreloadCondition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enabledWithReferString:;
+ (double)preloadTriggerDelayTime;
+ (BOOL)enableTriggerAfterCellPreload;
+ (BOOL)enableBackupDequeOpt;
+ (unsigned long long)upCount;
+ (unsigned long long)downCount;
+ (BOOL)enablePreloadUpInteraction;
+ (BOOL)preloadAllFeed;
+ (BOOL)enableActivateInfoWithDataSpread;
+ (double)spreadInterval;
+ (BOOL)enableResetSpread;
+ (BOOL)checkIfNeedResetSpread:;
+ (id)config;
+ (BOOL)enabled;
@end
