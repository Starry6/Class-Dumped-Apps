@interface NSOldValueObservationTransformer : NSObservationTransformer
- (void)dealloc;
- (void)_receiveBox:;
+ (id)oldValuesTransformer;
@end
