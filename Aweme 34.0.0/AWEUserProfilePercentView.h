@interface AWEUserProfilePercentView : UIView
@property (nonatomic) double percent;
@property (nonatomic) UIScrollView percentScrollView;
@property (nonatomic) q percentLabelNumberCount;
@property (nonatomic) NSMutableDictionary percentLableDict;
- (id)initWithFont:fontColor:labelCount:;
- (void)updateWith:completion:;
- (void)setPercentLabelNumberCount:;
- (void)p_setupSubviewsWith:fontColor:;
- (id)percentScrollView;
- (long long)percentLabelNumberCount;
- (id)percentLableDict;
- (void)setPercentScrollView:;
- (void)setPercentLableDict:;
- (void).cxx_destruct;
- (double)percent;
- (void)setPercent:;
@end
