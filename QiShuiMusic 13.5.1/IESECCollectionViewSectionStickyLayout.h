@interface IESECCollectionViewSectionStickyLayout : IESECCollectionViewSectionLayout
@property (nonatomic) BOOL defaultHidden;
@property (nonatomic) double offset;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL isStickied;
@property (nonatomic) double stickyOriginY;
- (BOOL)defaultHidden;
- (BOOL)isStickied;
- (id)prepareSectionItemLayoutAttributes;
- (id)prepareSectionLayoutAttribute;
- (double)sectionContentHeight;
- (id)sectionLayoutForSection:;
- (double)sectionStickHeight;
- (void)setDefaultHidden:;
- (void)setIsStickied:;
- (void)setStickyOriginY:;
- (BOOL)shouldInvalidateLayout;
- (double)stickHeightForHeader;
- (double)stickyOriginY;
- (double)contentHeight;
- (void)setOffset:;
- (id)initWithConfig:;
- (BOOL)invalidateLayoutWithContext:;
- (double)offset;
- (void)setContentHeight:;
- (double)sectionHeight;
@end
