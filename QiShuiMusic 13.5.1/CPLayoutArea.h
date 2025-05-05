@interface CPLayoutArea : CPRotatedRegion
- (id)init;
- (id)properties;
- (id)description;
- (void)accept:;
- (BOOL)isSimilarTo:;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (double)selectionBottom;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:;
- (void)addColumnBreaks;
- (id)layoutAreaBounds;
- (void)setHasRotatedCharacters:;
- (BOOL)hasRotatedCharacters;
@end
