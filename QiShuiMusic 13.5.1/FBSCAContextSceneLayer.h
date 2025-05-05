@interface FBSCAContextSceneLayer : FBSSceneLayer
@property (nonatomic) CAContext CAContext;
@property (nonatomic) I contextID;
- (BOOL)isCAContextLayer;
- (id)_succinctDescription;
- (id)_initWithCAContext:contextID:fallbackLevel:;
- (void)encodeWithXPCDictionary:;
- (unsigned int)contextID;
- (id)initWithCAContextID:level:;
- (id)CAContext;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (id)description;
- (id)initWithCAContext:;
- (BOOL)isEqual:;
+ (id)layerWithCAContext:;
@end
