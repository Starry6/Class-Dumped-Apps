@interface AWEDCFeedSmartLoadMoreConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enable;
@property (nonatomic) @? isShowingSkeletonBlock;
@property (nonatomic) q maxUnconsumedItemCount;
@property (nonatomic) q minUnconsumedScreenCount;
@property (nonatomic) BOOL scrollVelocityDetectEnabled;
@property (nonatomic) @? exhaustionDurationThresholdBlock;
- (id)isShowingSkeletonBlock;
- (void)setIsShowingSkeletonBlock:;
- (long long)maxUnconsumedItemCount;
- (void)setMaxUnconsumedItemCount:;
- (long long)minUnconsumedScreenCount;
- (void)setMinUnconsumedScreenCount:;
- (BOOL)scrollVelocityDetectEnabled;
- (void)setScrollVelocityDetectEnabled:;
- (id)exhaustionDurationThresholdBlock;
- (void)setExhaustionDurationThresholdBlock:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
@end
