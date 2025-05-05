@interface FBSExternalSceneLayer : FBSSceneLayer
@property (nonatomic) NSString sceneID;
- (BOOL)isExternalSceneLayer;
- (id)_succinctDescription;
- (void)encodeWithXPCDictionary:;
- (id)sceneID;
- (unsigned long long)hash;
- (id)initWithExternalSceneID:level:;
- (id)initWithXPCDictionary:;
- (id)initWithExternalSceneID:trackingContext:;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithCAContext:fallbackLevel:sceneID:;
- (long long)alignment;
- (BOOL)isEqual:;
@end
