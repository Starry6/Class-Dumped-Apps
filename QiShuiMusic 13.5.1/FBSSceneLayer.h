@interface FBSSceneLayer : NSObject
@property (nonatomic) CAContext context;
@property (nonatomic) q alignment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_unsafe_captureLevel;
- (id)_context;
- (BOOL)isExternalSceneLayer;
- (BOOL)isCAContextLayer;
- (id)_initWithCAContext:fallbackLevel:;
- (BOOL)isKeyboardProxyLayer;
- (double)_unsafe_level;
- (BOOL)isKeyboardLayer;
- (id)_succinctDescription;
- (id)init;
- (void)dealloc;
- (void)encodeWithXPCDictionary:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (long long)alignment;
@end
