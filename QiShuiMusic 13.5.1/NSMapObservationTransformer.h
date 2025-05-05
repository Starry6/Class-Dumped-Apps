@interface NSMapObservationTransformer : NSObservationTransformer
- (void)dealloc;
- (void)_receiveBox:;
- (id)initWithBlock:tag:;
@end
