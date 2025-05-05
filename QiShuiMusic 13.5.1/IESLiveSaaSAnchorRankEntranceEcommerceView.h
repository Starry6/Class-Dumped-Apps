@interface IESLiveSaaSAnchorRankEntranceEcommerceView : UIView
@property (nonatomic) IESLiveSaaSAnchorRankEntranceEcommerceViewModel viewModel;
@property (nonatomic) IESLiveSaaSAnchorRankEntranceMarqueeView marqueeView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attributedStringWithContent:;
- (id)backgroundColorForRank:;
- (void)bindViewModel;
- (BOOL)isMarqueeAnimating;
- (id)textColorForRank:;
- (void)setupConstraints;
- (id)viewModel;
- (void)layoutSubviews;
- (id)initWithViewModel:;
- (void)startAnimation;
- (id)marqueeView;
- (void).cxx_destruct;
- (void)setMarqueeView:;
- (void)setViewModel:;
@end
