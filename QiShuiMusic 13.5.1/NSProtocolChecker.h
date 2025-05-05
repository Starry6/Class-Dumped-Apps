@interface NSProtocolChecker : NSProxy
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSObject target;
- (id)initWithProtocol:;
- (id)_imMethodSignatureForSelector:;
- (id)protocol;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:protocol:;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (void)doesNotRecognizeSelector:;
- (id)methodDescriptionForSelector:;
- (id)_localClassNameForClass;
+ (id)allocWithZone:;
+ (id)protocolCheckerWithTarget:protocol:;
@end
