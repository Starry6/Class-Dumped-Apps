@interface RVSelection : NSObject
+ (id)revealRangeAtIndex:selectedRanges:shouldUpdateSelection:;
+ (id)searchRangeForString:aroundLocation:;
+ (unsigned long long)maxContextLength;
@end
