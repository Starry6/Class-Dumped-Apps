@interface IESLiveSaaSMediaIntroduceView : UIView
@property (nonatomic) IESLiveSaaSMediaRoomProfileStore store;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton alphaBtn;
@property (nonatomic) UIView actionView;
- (id)alphaBtn;
- (void)buildView:;
- (void)didClickPickUp;
- (id)initWithStore:titleOffset:;
- (void)resizeContent;
- (void)setAlphaBtn:;
- (id)textWithStr:font:paragraphSpacing:;
- (void)setScrollView:;
- (void)setStore:;
- (void)setTitleLabel:;
- (BOOL)pointInside:withEvent:;
- (id)scrollView;
- (void).cxx_destruct;
- (id)store;
- (id)titleLabel;
- (id)actionView;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setActionView:;
@end
