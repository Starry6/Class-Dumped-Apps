@interface IESECSKUSpecTitleCell : UICollectionViewCell
@property (nonatomic) UIView mainView;
@property (nonatomic) UILabel specName;
- (void)setMainView:;
- (void)setSpecName:;
- (id)specName;
- (void)updateCellWithTitle:WithType:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)mainView;
+ (id)attributedText:fontSize:lineHeight:;
+ (id)cellSizeWithTitle:WithType:;
@end
