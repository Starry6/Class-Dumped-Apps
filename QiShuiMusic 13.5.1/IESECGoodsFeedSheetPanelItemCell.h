@interface IESECGoodsFeedSheetPanelItemCell : UICollectionViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView line;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateUIWithModel:cellPos:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)line;
- (void)setLine:;
- (void)setupUI;
+ (id)identifier;
@end
