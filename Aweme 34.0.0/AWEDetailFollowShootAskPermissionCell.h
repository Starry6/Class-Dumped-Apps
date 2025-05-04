@interface AWEDetailFollowShootAskPermissionCell : UICollectionViewCell
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton openButton;
- (void)configWithModel:serviceProvider:;
- (void)applyHiddenAction;
- (void)openButtonClick;
- (void)setProvider:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)provider;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)openButton;
- (void)setOpenButton:;
@end
