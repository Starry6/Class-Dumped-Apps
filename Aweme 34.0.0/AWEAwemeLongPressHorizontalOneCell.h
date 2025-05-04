@interface AWEAwemeLongPressHorizontalOneCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) BOOL enableDynamicTheme;
@property (nonatomic) AFDLongPressContext context;
- (BOOL)enableDynamicTheme;
- (void)setEnableDynamicTheme:;
- (void)setupUIWithContext:;
- (void)updateDynamicTheme:;
- (void)updateTitle:titleColor:;
- (void)updateIconWithImage:;
- (id)titleColor;
- (void)setTitleColor:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)context;
@end
