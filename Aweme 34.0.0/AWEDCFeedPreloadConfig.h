@interface AWEDCFeedPreloadConfig : AWEDCFeedBaseConfig
@property (nonatomic) q workingRangeSize;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL disableLoadmoreUntilUserScroll;
- (long long)workingRangeSize;
- (void)setWorkingRangeSize:;
- (void)setupDefaultConfig;
- (void)setDisableLoadmoreUntilUserScroll:;
- (BOOL)disableLoadmoreUntilUserScroll;
- (BOOL)enable;
- (void)setEnable:;
@end
