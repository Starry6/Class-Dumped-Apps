@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity
- (id)validationToken;
- (id)persona;
- (BOOL)isExtension;
- (BOOL)isAnonymous;
- (id)initWithRBSXPCCoder:;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:;
- (id)uuid;
- (id)hostIdentity;
- (unsigned long long)hash;
- (BOOL)isXPCService;
- (BOOL)_matchesIdentity:;
- (id)xpcServiceIdentifier;
- (void).cxx_destruct;
- (id)hostIdentifier;
- (BOOL)supportsLaunchingDirectly;
- (id)copyWithAuid:;
- (unsigned char)defaultManageFlags;
- (BOOL)isEqualToIdentity:;
- (BOOL)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:;
+ (BOOL)shouldManageExtensionWithExtensionPoint:;
@end
