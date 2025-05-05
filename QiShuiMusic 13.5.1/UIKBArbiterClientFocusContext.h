@interface UIKBArbiterClientFocusContext : NSObject
@property (nonatomic) I contextID;
@property (nonatomic) FBSSceneIdentityToken sceneIdentity;
- (unsigned int)contextID;
- (void)setContextID:;
- (id)initWithCoder:;
- (id)sceneIdentity;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSceneIdentity:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)focusContextForSceneIdentity:contextID:;
+ (BOOL)supportsSecureCoding;
@end
