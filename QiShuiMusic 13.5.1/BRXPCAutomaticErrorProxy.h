@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy
@property (nonatomic) Q timeoutState;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:service:interface:;
- (void)invalidate;
- (id)copyWithZone:;
+ (BOOL)sanitizeErrors;
+ (void)incrementConnectionRefCount:;
+ (void)decrementConnectionRefCount:;
@end
