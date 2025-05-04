@interface AWEFeedSpeedOptimizeManager : NSObject
@property (nonatomic) q optimizeExpType;
@property (nonatomic) BOOL alreadyTriggerProgress;
@property (nonatomic) AWEFeedSpeedOptimizeGuideView optimizeGuideView;
- (BOOL)alreadyTriggerProgress;
- (long long)optimizeExpType;
- (void)setAlreadyTriggerProgress:;
- (id)optimizeGuideView;
- (void)hideOptimizeGuideView;
- (void)setOptimizeExpType:;
- (void)setOptimizeGuideView:;
- (id)init;
- (void).cxx_destruct;
+ (int)expVersion;
+ (double)expVerticalDistancePercent;
+ (double)expUpperSpeed;
+ (double)expLowerSpeed;
+ (double)expHorizontalDistancePercent;
+ (BOOL)expSceneHomepageHotOnly;
+ (int)expGuideSuccessTimes;
+ (int)expGuideShowTimes;
+ (int)expEnableScene;
+ (id)sharedInstance;
@end
