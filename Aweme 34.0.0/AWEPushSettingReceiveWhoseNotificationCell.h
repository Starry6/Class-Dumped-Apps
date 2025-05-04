@interface AWEPushSettingReceiveWhoseNotificationCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) UIImageView iconImageView;
- (void)__setupUI;
- (void)__resetUIStyle;
- (BOOL)userSelected;
- (void)setUserSelected:;
- (void)configWithType:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
@end
