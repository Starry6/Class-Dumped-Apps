@interface AWEFeedPagingManager : NSObject
+ (void)_aweLazyRegisterStaticLoad;
+ (BOOL)hookContentOffset;
+ (id)pagingAnimationDurationOffsetConfig;
+ (id)pagingVelocityThresholdConfig;
+ (id)velocityThresholdConfig;
+ (id)pagingDistanceConfig;
+ (BOOL)targetContentOffsetGetOpt;
+ (BOOL)ptPredictAnimationDurationEnabled;
+ (id)durationOffsetConfig;
+ (BOOL)cellPreloadedAnimationDurationEnabled;
+ (BOOL)ptPredictAdsAnimationDurationEnabled;
+ (BOOL)ptPredictVelocityThresholdEnabled;
+ (BOOL)diffVelocityThresholdEnabled;
+ (BOOL)liveVelocityThresholdEnabled;
+ (BOOL)adVelocityThresholdEnabled;
+ (BOOL)nextAdVelocityThresholdEnabled;
+ (BOOL)normalDistanceEnabled;
+ (BOOL)adDistanceEnabled;
+ (BOOL)ptPredictDistanceEnabled;
+ (id)preSlideDistanceConfig;
+ (id)nextSlideDistanceConfig;
+ (unsigned long long)curve;
+ (id)config;
+ (unsigned long long)type;
+ (BOOL)enabled;
+ (double)animationDuration;
@end
