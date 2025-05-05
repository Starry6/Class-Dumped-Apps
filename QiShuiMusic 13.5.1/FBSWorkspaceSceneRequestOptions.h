@interface FBSWorkspaceSceneRequestOptions : NSObject
@property (nonatomic) BOOL keyboardScene;
@property (nonatomic) NSString identifier;
@property (nonatomic) FBSSceneSpecification specification;
@property (nonatomic) FBSSceneClientSettings initialClientSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInitialClientSettings:;
- (id)initialClientSettings;
- (id)specification;
- (void)setKeyboardScene:;
- (BOOL)isKeyboardScene;
- (void)setSpecification:;
- (id)initWithBSXPCCoder:;
- (id)identifier;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (void)setIdentifier:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
