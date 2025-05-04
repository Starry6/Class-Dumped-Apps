@interface AWESingleColumnDetailCardInfoContainerView : UIView
@property (nonatomic) AWESingleColumnDetailPageContext context;
@property (nonatomic) q cardIndex;
- (void)configWithModel:;
- (void)setCardIndex:;
- (long long)cardIndex;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
- (void)updateWithModel:;
@end
