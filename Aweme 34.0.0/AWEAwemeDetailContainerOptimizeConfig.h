@interface AWEAwemeDetailContainerOptimizeConfig : NSObject
@property (nonatomic) BOOL enableReloadAnimationOpt;
@property (nonatomic) BOOL initialFetchNeedReloadAnimationOptEnable;
@property (nonatomic) BOOL disableSeekPlayTimeToZeroOfHasSlideToOtherFeed;
@property (nonatomic) BOOL enableLiveHideBottomBar;
@property (nonatomic) BOOL enableTidyModelEnterDetailOptimize;
- (void)setEnableTidyModelEnterDetailOptimize:;
- (BOOL)enableReloadAnimationOpt;
- (void)setEnableReloadAnimationOpt:;
- (BOOL)initialFetchNeedReloadAnimationOptEnable;
- (void)setInitialFetchNeedReloadAnimationOptEnable:;
- (BOOL)disableSeekPlayTimeToZeroOfHasSlideToOtherFeed;
- (void)setDisableSeekPlayTimeToZeroOfHasSlideToOtherFeed:;
- (BOOL)enableLiveHideBottomBar;
- (void)setEnableLiveHideBottomBar:;
- (BOOL)enableTidyModelEnterDetailOptimize;
@end
