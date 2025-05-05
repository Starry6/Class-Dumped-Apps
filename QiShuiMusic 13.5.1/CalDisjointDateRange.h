@interface CalDisjointDateRange : NSObject
@property (nonatomic) NSSet distinctRanges;
- (BOOL)containsRange:;
- (id)addRange:;
- (BOOL)intersectsRange:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)totalDuration;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsDate:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)intersectionWithRange:;
- (id)subtractRange:;
- (id)initWithDistinctRanges:;
- (id)distinctRanges;
- (id)sortedDistinctRanges;
- (id)addDisjointRange:;
- (id)subtractDisjointRange:;
- (id)intersectionWithDisjointRange:;
- (void)setDistinctRanges:;
+ (BOOL)supportsSecureCoding;
+ (id)disjointRangeWithDistinctRanges:;
+ (id)disjointRangeWithSingleRange:;
@end
