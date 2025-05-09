@interface IESECGoodsFeedQualityTracker : NSObject
@property (nonatomic) NSMutableDictionary fullMetricsSnapshot;
@property (nonatomic) NSMutableDictionary metricsSnapshot;
@property (nonatomic) IESECGoodsDetailParameters globalParameters;
@property (nonatomic) IESECGoodsFeedContext context;
@property (nonatomic) IESECQualityInfoV2 info;
@property (nonatomic) NSNumber viewdidloadTime;
@property (nonatomic) double requestStart;
@property (nonatomic) q guessLikeStart;
@property (nonatomic) BOOL isFullPerfTracked;
@property (nonatomic) BOOL isFirstCardPerfTracked;
@property (nonatomic) BOOL isFirstCardRecord;
- (id)metricsSnapshot;
- (id)viewdidloadTime;
- (void)configMetricSnapshot;
- (void)firstCardFetched;
- (void)firstCardRequestStart;
- (void)firstRecommendListFetched;
- (void)firstRecommendListRenderStart;
- (void)firstRecommendListRequest;
- (id)fullMetricsSnapshot;
- (long long)guessLikeStart;
- (id)initWithGoodsDetailParameters:;
- (BOOL)isFirstCardPerfTracked;
- (BOOL)isFirstCardRecord;
- (BOOL)isFullPerfTracked;
- (void)old_willShowAtIndex:viewModel:;
- (void)p_reportFirstCardRenderCompleteWithParams:;
- (void)p_reportFullRenderCompleteWithParams:;
- (void)setFullMetricsSnapshot:;
- (void)setGuessLikeStart:;
- (void)setIsFirstCardPerfTracked:;
- (void)setIsFirstCardRecord:;
- (void)setIsFullPerfTracked:;
- (void)setMetricsSnapshot:;
- (void)setViewdidloadTime:;
- (void)trackWithType:;
- (void)updateWithParams:;
- (void)willShowAtIndex:viewModel:;
- (void)setRequestStart:;
- (double)requestStart;
- (id)context;
- (void)start;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)info;
- (void)setContext:;
- (void)viewDidLoad;
- (id)globalParameters;
- (void)setGlobalParameters:;
@end
