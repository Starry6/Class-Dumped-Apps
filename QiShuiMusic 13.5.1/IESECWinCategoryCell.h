@interface IESECWinCategoryCell : UICollectionViewCell
@property (nonatomic) UIImageView categoryIcon;
@property (nonatomic) UILabel categoryNameLabel;
@property (nonatomic) UIImageView categoryImageView;
@property (nonatomic) IESECWinCategoryModel model;
@property (nonatomic) UIView nameContainer;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} previousFrame;
- (id)categoryNameLabel;
- (void)displayLinkDidFire;
- (id)nameContainer;
- (void)setCategoryNameLabel:;
- (void)setNameContainer:;
- (void)startDisplayLink;
- (void)updateImageViewWithSelected:;
- (void)updateNameLabelWithSelected:;
- (void)updateUIWithSelected:;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)model;
- (void)stopDisplayLink;
- (void)setModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setCategoryIcon:;
- (id)categoryIcon;
- (id)categoryImageView;
- (void)setCategoryImageView:;
- (void)updateWithModel:;
- (void)setUpConstraints;
- (id)previousFrame;
- (void)setPreviousFrame:;
@end
