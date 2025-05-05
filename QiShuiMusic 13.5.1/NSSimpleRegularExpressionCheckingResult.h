@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:;
- (id)initWithRanges:count:regularExpression:;
- (id)regularExpression;
- (id)range;
- (id)rangeArray;
- (id)initWithRangeArray:regularExpression:;
- (unsigned long long)numberOfRanges;
- (id)rangeAtIndex:;
@end
