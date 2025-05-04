@interface AWERelatedRecommendDCNoMoreDataView : UIView
@property (nonatomic) UILabel noMoreVideoLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView backImageView;
@property (nonatomic) @? backAction;
- (void)updateButtonTitle:;
- (void)updateButtonContainerShowState:;
- (void)setBackImageView:;
- (id)backImageView;
- (void)clickBottomView;
- (void)updateUIWithView:;
- (id)noMoreVideoLabel;
- (void)setNoMoreVideoLabel:;
- (id)initWithFrame:;
- (void)setBackAction:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)backAction;
- (void)setupSubviews;
+ (BOOL)bigFontAdapterOn;
@end
