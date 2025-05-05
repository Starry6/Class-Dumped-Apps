@interface FBSKeyboardProxyLayer : FBSSceneLayer
@property (nonatomic) FBSSceneIdentityToken keyboardOwner;
- (BOOL)isKeyboardProxyLayer;
- (id)_succinctDescription;
- (void)encodeWithXPCDictionary:;
- (id)keyboardOwner;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (id)initWithLevel:keyboardOwner:;
- (void).cxx_destruct;
- (id)description;
- (long long)alignment;
- (BOOL)isEqual:;
@end
