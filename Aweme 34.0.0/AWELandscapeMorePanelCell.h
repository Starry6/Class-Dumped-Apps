@interface AWELandscapeMorePanelCell : UICollectionViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIFont defaultFont;
- (void)updateWithPanelCellModel:;
- (id)textLabel;
- (id)icon;
- (id)defaultFont;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupSubviews;
- (void)setDefaultFont:;
+ (BOOL)shouldShowTwoLineStyle;
+ (id)identifier;
+ (id)cellSize;
@end
