@interface BDXCategoryTitleVerticalZoomView : BDXCategoryTitleView
@property (nonatomic) double currentVerticalScale;
@property (nonatomic) double maxVerticalFontScale;
@property (nonatomic) double minVerticalFontScale;
@property (nonatomic) double maxVerticalCellSpacing;
@property (nonatomic) double minVerticalCellSpacing;
- (double)currentVerticalScale;
- (void)initializeData;
- (void)listDidScrollWithVerticalHeightPercent:;
- (double)maxVerticalCellSpacing;
- (double)maxVerticalFontScale;
- (double)minVerticalCellSpacing;
- (double)minVerticalFontScale;
- (Class)preferredCellClass;
- (void)refreshCellModel:index:;
- (void)refreshDataSource;
- (void)setCurrentVerticalScale:;
- (void)setMaxVerticalCellSpacing:;
- (void)setMaxVerticalFontScale:;
- (void)setMinVerticalCellSpacing:;
- (void)setMinVerticalFontScale:;
@end
