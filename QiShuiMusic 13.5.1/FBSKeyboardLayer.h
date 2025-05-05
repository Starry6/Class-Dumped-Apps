@interface FBSKeyboardLayer : FBSSceneLayer
- (id)_initWithCAContext:fallbackLevel:;
- (BOOL)isKeyboardLayer;
- (id)_succinctDescription;
- (unsigned long long)hash;
- (id)initWithTrackingContext:;
- (id)description;
- (long long)alignment;
- (BOOL)isEqual:;
@end
