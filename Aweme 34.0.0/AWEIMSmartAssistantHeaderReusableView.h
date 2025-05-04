@interface AWEIMSmartAssistantHeaderReusableView : UICollectionReusableView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView infoView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UITapGestureRecognizer tap;
- (void)handleSubTitleStackViewTapped;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrow;
- (void)setArrow:;
- (id)tap;
- (void)setTap:;
- (id)infoView;
- (void)setInfoView:;
- (void)setUpUI;
@end
