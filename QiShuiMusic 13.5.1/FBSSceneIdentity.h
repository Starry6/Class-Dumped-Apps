@interface FBSSceneIdentity : NSObject
@property (nonatomic) NSString internalWorkspaceIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString workspaceIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)workspaceIdentifier;
- (id)initWithBSXPCCoder:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)internalWorkspaceIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)identityForIdentifier:workspaceIdentifier:internalWorkspaceIdentifier:;
+ (id)identityForIdentifier:workspaceIdentifier:;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)identityForIdentifier:;
@end
