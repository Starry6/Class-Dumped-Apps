@interface PLBoundedConcurrentQueue : NSObject
- (void)sync:;
- (void).cxx_destruct;
- (void)async:;
- (id)initWithName:concurrencyLimit:;
@end
