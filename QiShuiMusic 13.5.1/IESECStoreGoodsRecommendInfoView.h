@interface IESECStoreGoodsRecommendInfoView : UIView
@property (nonatomic) YYLabel textView;
@property (nonatomic) BOOL showNewFontColor;
@property (nonatomic) double reasonLabelFontSize;
- (id)p_recommendIconImageView:;
- (double)reasonLabelFontSize;
- (void)setReasonLabelFontSize:;
- (void)setRecommendRitTag:;
- (void)setShowNewFontColor:;
- (BOOL)showNewFontColor;
- (id)textView;
- (id)initWithFrame:;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)setupViews;
@end
