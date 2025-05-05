@interface FPExceptionToErrorProxy : NSObject
@property (nonatomic) @? unhandledExceptionHandler;
@property (nonatomic) @ target;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:;
- (id)methodSignatureForSelector:;
- (id)errorFromException:whileSendingToSelector:;
- (void)setTarget:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)target;
- (void)setUnhandledExceptionHandler:;
- (void)forwardInvocation:;
- (id)unhandledExceptionHandler;
@end
