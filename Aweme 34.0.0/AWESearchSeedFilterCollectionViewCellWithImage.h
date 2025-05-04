@interface AWESearchSeedFilterCollectionViewCellWithImage : AWESearchSeedFilterCollectionViewCell
@property (nonatomic) BOOL borderSettled;
@property (nonatomic) UIButton contentButton;
@property (nonatomic) UIImageView iconView;
- (void)configureUI;
- (void)setContentButton:;
- (void)updateCellConfig;
- (id)defaultSelectedLabelFont;
- (id)defaultUnselectedLabelFont;
- (BOOL)borderSettled;
- (void)setBorderSettled:;
- (void)updateWithIconImage:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)contentButton;
- (void)updateWithText:;
@end
