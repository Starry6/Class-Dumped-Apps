@interface AWEMVSelectedBillboardEntranceView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXBadge redPointBadge;
@property (nonatomic) AWEMVSelectedBillboardEntranceModel entranceModel;
- (void)updateWithTheme:;
- (id)entranceModel;
- (void)setEntranceModel:;
- (void)showRedPointIfNeeded;
- (id)redPointBadge;
- (void)didClickEntranceView;
- (void)setRedPointBadge:;
- (id)init;
- (void)dealloc;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (void)themeDidChange;
- (void)updateWithModel:;
+ (double)viewHeight;
@end
