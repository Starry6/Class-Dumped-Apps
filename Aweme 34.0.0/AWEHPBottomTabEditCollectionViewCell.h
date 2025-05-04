@interface AWEHPBottomTabEditCollectionViewCell : UICollectionViewCell
@property (nonatomic) Q cornerType;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) DUXRadioBox radio;
@property (nonatomic) DUXDivider divider;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL isLast;
- (void)setIsLast:;
- (void)updatePanelThemeStyle:;
- (void)p_updateCorners;
- (void)updateWithItem:cornerType:;
- (id)initWithFrame:;
- (void)setChecked:;
- (BOOL)checked;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (BOOL)isLast;
- (void)setupUI;
- (id)radio;
- (id)divider;
- (void)setRadio:;
- (void)setDivider:;
- (unsigned long long)cornerType;
- (void)setCornerType:;
@end
