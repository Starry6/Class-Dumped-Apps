@interface NSISVariableObservation : NSObject
- (void)dealloc;
- (id)initWithVariable:;
- (void)valueWasDirtied;
- (void)emitValueIfNeededWithEngine:;
@end
