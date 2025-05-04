@interface AWESearchMerchandiseRecommendReasonView : UIView
@property (nonatomic) AWESearchMerchandiseRecommendReasonItemView leftItemView;
@property (nonatomic) AWESearchMerchandiseRecommendReasonItemView rightItemView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setUpViews;
- (id)leftItemView;
- (id)rightItemView;
- (void)setLeftItemView:;
- (void)setRightItemView:;
- (void)updateWithModel:;
@end
