@interface BDXCategoryDotView : BDXCategoryTitleView
@property (nonatomic) Q relativePosition;
@property (nonatomic) NSArray dotStates;
@property (nonatomic) {CGSize=dd} dotSize;
@property (nonatomic) double dotCornerRadius;
@property (nonatomic) UIColor dotColor;
@property (nonatomic) {CGPoint=dd} dotOffset;
- (double)dotCornerRadius;
- (id)dotOffset;
- (id)dotStates;
- (void)initializeData;
- (Class)preferredCellClass;
- (void)refreshCellModel:index:;
- (void)refreshDataSource;
- (void)setDotCornerRadius:;
- (void)setDotOffset:;
- (void)setDotSize:;
- (void)setDotStates:;
- (void).cxx_destruct;
- (unsigned long long)relativePosition;
- (void)setDotColor:;
- (id)dotColor;
- (void)setRelativePosition:;
- (id)dotSize;
@end
