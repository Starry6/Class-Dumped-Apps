@interface RBSDextProcessIdentity : RBSProcessIdentity
- (BOOL)isAnonymous;
- (id)initWithRBSXPCCoder:;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:;
- (id)debugDescription;
- (BOOL)_matchesIdentity:;
- (void).cxx_destruct;
- (id)copyWithAuid:;
- (id)initWithDecodeFromJob:;
- (id)_initDextWithServerName:label:containingAppBundleID:;
- (id)_initDextWithServerName:tagString:containingAppBundleID:;
- (id)dextServerName;
- (id)dextLabel;
- (id)dextContainingAppBundleID;
- (BOOL)isDext;
@end
