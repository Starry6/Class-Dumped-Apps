@interface NSFilterObservationTransformer : NSObservationTransformer
- (void)dealloc;
- (void)_receiveBox:;
- (id)initWithBlock:;
+ (id)filterWithBlock:;
@end
