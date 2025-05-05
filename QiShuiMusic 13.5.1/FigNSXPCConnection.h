@interface FigNSXPCConnection : NSXPCConnection
@property (nonatomic) BOOL explicitlyInvalidated;
- (void)dealloc;
- (void)resume;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (BOOL)explicitlyInvalidated;
@end
