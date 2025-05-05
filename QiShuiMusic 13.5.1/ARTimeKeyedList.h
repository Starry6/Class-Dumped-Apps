@interface ARTimeKeyedList : NSObject
- (id)init;
- (void)clear;
- (id)initWithMaxSize:;
- (void).cxx_destruct;
- (id)description;
- (void)appendObject:forTime:;
- (unsigned long long)insertionIndexForTime:;
- (id)nearestObjectForTime:;
@end
