@interface AWERVDetailVideoRelatedVideoTabFakeCardView : UIView
@property (nonatomic) NSArray firstColumnViews;
@property (nonatomic) NSArray secondColumnView;
@property (nonatomic) NSArray ratios;
- (void)setRatios:;
- (void)addCardCellIfNeeds;
- (id)firstColumnViews;
- (id)secondColumnView;
- (void)setFirstColumnViews:;
- (void)setSecondColumnView:;
- (id)ratios;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
