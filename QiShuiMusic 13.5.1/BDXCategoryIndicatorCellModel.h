@interface BDXCategoryIndicatorCellModel : BDXCategoryBaseCellModel
@property (nonatomic) BOOL sepratorLineShowEnabled;
@property (nonatomic) UIColor separatorLineColor;
@property (nonatomic) {CGSize=dd} separatorLineSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} backgroundViewMaskFrame;
@property (nonatomic) BOOL cellBackgroundColorGradientEnabled;
@property (nonatomic) UIColor cellBackgroundSelectedColor;
@property (nonatomic) UIColor cellBackgroundUnselectedColor;
- (void)setCellBackgroundSelectedColor:;
- (id)backgroundViewMaskFrame;
- (id)cellBackgroundUnselectedColor;
- (BOOL)isCellBackgroundColorGradientEnabled;
- (BOOL)isSepratorLineShowEnabled;
- (id)separatorLineSize;
- (void)setBackgroundViewMaskFrame:;
- (void)setCellBackgroundColorGradientEnabled:;
- (void)setCellBackgroundUnselectedColor:;
- (void)setSeparatorLineColor:;
- (void)setSeparatorLineSize:;
- (void)setSepratorLineShowEnabled:;
- (id)separatorLineColor;
- (id)cellBackgroundSelectedColor;
- (void).cxx_destruct;
@end
