@interface CPTextLineMerge : NSObject
- (BOOL)fits:into:;
- (void)addInterval:to:;
- (void)mergeColumn:overlapping:;
- (void)mergeLinesInInterval:from:;
- (void)mergeByColumn:;
- (void)eliminate:;
- (BOOL)hasOverlappingLines;
- (void)makeOverlappingLinesTo:;
- (void)removeOverlapping:;
- (unsigned int)countOverlapsOfLineAtIndex:in:;
- (void)detachDropCaps:to:;
- (id)findLineFor:in:;
- (double)averageHeight:;
- (void)dropCaps:to:;
- (void)mergeLinesIn:;
@end
