@interface AWEFeedLockSpeedManager : NSObject
@property (nonatomic) AWEFeedLongPressLockSpeedGuideView guideView;
- (void).cxx_destruct;
- (id)guideView;
- (void)setGuideView:;
+ (BOOL)shouldLockSpeedAndShowCapsule;
+ (BOOL)longPressLockSpeedEnable;
+ (long long)getTriggerLockDistance;
+ (BOOL)unsupportedLockSpeedListWithAweme:;
+ (BOOL)longPressLockSpeedFixedAreaEnable;
+ (double)getGuideTriggerTime;
+ (long long)getGuideCount;
+ (long long)getTriggerExpandHotAreaDistance;
+ (id)longPressLockSpeedConfig;
+ (BOOL)lockSpeedShowCapsuleButton;
+ (id)sharedInstance;
@end
