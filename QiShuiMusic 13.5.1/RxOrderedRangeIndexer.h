@interface RxOrderedRangeIndexer : NSObject
@property (nonatomic) NSArray orderedRanges;
@property (nonatomic) {_NSRange=QQ} containingRange;
@property (nonatomic) q numberOfRanges;
- (id)containingRange;
- (long long)indexOfRangeContainingLocation:;
- (void)appendRange:;
- (id)orderedRanges;
- (id)rangeContainingLocation:;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (long long)numberOfRanges;
- (id)rangeAtIndex:;
@end
