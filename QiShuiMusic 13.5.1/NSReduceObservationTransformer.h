@interface NSReduceObservationTransformer : NSObservationTransformer
- (void)dealloc;
- (void)_receiveBox:;
- (void)finishObserving;
- (id)initWithBlock:initialValue:;
+ (id)reduceValue:withReducer:;
@end
