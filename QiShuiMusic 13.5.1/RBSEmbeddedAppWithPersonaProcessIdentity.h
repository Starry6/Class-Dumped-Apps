@interface RBSEmbeddedAppWithPersonaProcessIdentity : RBSProcessIdentity
- (id)_initEmbeddedAppWithAppInfoProvider:;
- (BOOL)isApplication;
- (BOOL)isAnonymous;
- (id)initWithRBSXPCCoder:;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:;
- (id)_initEmbeddedApp:personaString:;
- (id)personaString;
- (id)embeddedApplicationIdentifier;
- (BOOL)treatedAsAnAppByFrontBoard:;
- (id)debugDescription;
- (BOOL)_matchesIdentity:;
- (BOOL)isEmbeddedApplication;
- (void).cxx_destruct;
- (BOOL)supportsLaunchingDirectly;
- (id)copyWithAuid:;
- (unsigned char)defaultManageFlags;
- (BOOL)isEqual:;
@end
