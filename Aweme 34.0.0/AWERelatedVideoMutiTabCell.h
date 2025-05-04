@interface AWERelatedVideoMutiTabCell : UICollectionViewCell
@property (nonatomic) UIView container;
@property (nonatomic) UILabel label;
- (void)updateSelectedStatus:;
- (void)setContainer:;
- (void)setLabel:;
- (id)container;
- (id)initWithFrame:;
- (void)updateWithDescription:;
- (id)label;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)tagFontWithSelected:;
+ (id)identifier;
+ (double)horizontalOffset;
@end
