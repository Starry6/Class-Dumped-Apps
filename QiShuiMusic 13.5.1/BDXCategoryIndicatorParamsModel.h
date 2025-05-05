@interface BDXCategoryIndicatorParamsModel : NSObject
@property (nonatomic) q selectedIndex;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} selectedCellFrame;
@property (nonatomic) q leftIndex;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} leftCellFrame;
@property (nonatomic) q rightIndex;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rightCellFrame;
@property (nonatomic) double percent;
@property (nonatomic) q lastSelectedIndex;
@property (nonatomic) Q selectedType;
- (long long)lastSelectedIndex;
- (id)leftCellFrame;
- (long long)leftIndex;
- (id)rightCellFrame;
- (long long)rightIndex;
- (id)selectedCellFrame;
- (void)setLastSelectedIndex:;
- (void)setLeftCellFrame:;
- (void)setLeftIndex:;
- (void)setRightCellFrame:;
- (void)setRightIndex:;
- (void)setSelectedCellFrame:;
- (void)setSelectedType:;
- (long long)selectedIndex;
- (void)setSelectedIndex:;
- (unsigned long long)selectedType;
- (double)percent;
- (void)setPercent:;
@end
