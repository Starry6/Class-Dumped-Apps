@interface CPZoneMaker : NSObject
- (void)dealloc;
- (BOOL)overlap:with:;
- (void)makeZonesIn:;
- (unsigned int)categorizeGraphicsIn:;
- (void)mergeQualifyingRectanglesIn:;
- (void)addZonesWithBoundaryIn:withBorder:;
- (void)makeZonesWithBoundaryIn:;
- (void)splitByRotatation:inPage:;
- (void)cutHorizontalBorders:whereObscuredByShape:;
- (void)cutVerticalBorders:whereObscuredByShape:;
- (void)addObjectsToStraddler:from:;
- (id)newZoneForStraddlersFrom:;
@end
