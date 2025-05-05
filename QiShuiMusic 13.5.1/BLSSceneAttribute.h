@interface BLSSceneAttribute : BLSAttribute
@property (nonatomic) FBSSceneIdentityToken sceneIdentityToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFBSScene:;
- (id)initWithSceneIdentityToken:;
- (id)sceneIdentityToken;
+ (BOOL)supportsSecureCoding;
@end
