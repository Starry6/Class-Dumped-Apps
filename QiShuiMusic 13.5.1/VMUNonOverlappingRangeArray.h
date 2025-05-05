@interface VMUNonOverlappingRangeArray : VMURangeArray
- (void)sortAndMergeRanges;
- (void)mergeRange:;
- (void)mergeRange:excludingRanges:;
- (id)subtract:mergeRanges:;
- (void)addOrExtendRange:;
- (void)_mergeAllBitsOfRange:excludingRanges:mergeRanges:;
- (void)mergeRanges:excludingRanges:;
- (void)mergeRanges:;
@end
