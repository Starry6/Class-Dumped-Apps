@interface AWEFeedRetrieveDisableRecommendUserManager : NSObject
@property (nonatomic) AWEFeedRetrieveDisableRecommendUserFrequencyChecker frequencyChecker;
@property (nonatomic) q continuousSkipCountLimit;
@property (nonatomic) NSMutableSet trackItemIDArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)continuousSkipCountLimit;
- (id)frequencyChecker;
- (id)trackItemIDArray;
- (void)setFrequencyChecker:;
- (void)setContinuousSkipCountLimit:;
- (void)setTrackItemIDArray:;
- (void).cxx_destruct;
+ (id)abTestParams;
+ (BOOL)enableRetrieveDisableRecommendUser;
+ (BOOL)canShowBottomBarWithContinuousSkipCount:;
+ (void)recordHasShownBottomBarWithItemID:;
+ (void)recordBottomBarClicked;
+ (id)sharedInstance;
@end
