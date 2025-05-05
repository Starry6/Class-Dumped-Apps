@interface BSAtomicSignal : NSObject
- (BOOL)signal;
- (id)init;
- (BOOL)hasBeenSignalled;
- (id)description;
@end
