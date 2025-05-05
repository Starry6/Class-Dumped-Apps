@interface WebInterruptionObserverHelper : NSObject
- (void)dealloc;
- (id)initWithCallback:;
- (void)interruption:;
- (void)clearCallback;
@end
