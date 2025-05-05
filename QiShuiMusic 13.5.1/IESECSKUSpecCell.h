@interface IESECSKUSpecCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) IESECUIImageView iconImageView;
@property (nonatomic) <IESECSKUSpecCellDelegate> delegate;
@property (nonatomic) IESECSKUSpecItemInfo viewModel;
- (void)tapGestureFired:;
- (void)updateAccessibility;
- (id)viewModel;
- (void)setDelegate:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setViewModel:;
- (id)nameLabel;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)updateUI;
+ (id)selectedBGColor;
+ (id)nameNormalColor;
+ (id)borderNormalColor;
+ (id)borderSelectColor;
+ (id)cellSizeWithName:icon:boundingSize:;
+ (id)nameDisableColor;
+ (id)nameSelectedColor;
+ (id)normalBGColor;
+ (id)nameFont;
@end
