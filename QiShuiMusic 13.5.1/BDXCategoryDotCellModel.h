@interface BDXCategoryDotCellModel : BDXCategoryTitleCellModel
@property (nonatomic) BOOL dotHidden;
@property (nonatomic) Q relativePosition;
@property (nonatomic) {CGSize=dd} dotSize;
@property (nonatomic) double dotCornerRadius;
@property (nonatomic) UIColor dotColor;
@property (nonatomic) {CGPoint=dd} dotOffset;
- (double)dotCornerRadius;
- (BOOL)dotHidden;
- (id)dotOffset;
- (void)setDotCornerRadius:;
- (void)setDotHidden:;
- (void)setDotOffset:;
- (void)setDotSize:;
- (void).cxx_destruct;
- (unsigned long long)relativePosition;
- (void)setDotColor:;
- (id)dotColor;
- (void)setRelativePosition:;
- (id)dotSize;
@end
