@interface IESLiveInteractComponentMultiCaster : NSObject
@property (nonatomic) NSPointerArray delegates;
- (void)fallbackUnrecognizedSelector:;
- (id)initWithComponents:retain:;
- (void)mountComponents:;
- (void)p_removeDelegates:;
- (id)signatureForSelector:;
- (void)unmountComponents:;
- (BOOL)respondsToSelector:;
- (id)delegates;
- (void)setDelegates:;
- (id)methodSignatureForSelector:;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (id)allObjects;
@end
