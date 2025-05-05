@interface IESSaaSTIMMulticastDelegateTarget : NSObject
@property (nonatomic) IESSaaSTIMMulticastDelegate target;
- (id)duplicateInvocation:;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)forwardInvocation:;
- (void)doesNotRecognizeSelector:;
- (void)doNothing;
@end
