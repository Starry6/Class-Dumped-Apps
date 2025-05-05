@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager
@property (nonatomic) {_NSRange=QQ} ignoreRange;
- (double)gridArrangement:widthOfColumnAtIndex:spacingAfter:;
- (id)sizeForFittingSize:forRow:;
- (id)ignoreRange;
- (void)setIgnoreRange:;
+ (id)computeTruncationForAlignments:indexForFirstTrailingColumn:totalEqualColumns:;
@end
