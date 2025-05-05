@interface TRIDefaultFactorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)promotableFactorPackIdForNamespaceName:;
- (id)treatmentIdWithNamespaceName:;
- (void)invalidateAllFactorProviders;
- (unsigned int)compatibilityVersionWithNamespaceName:;
- (id)factorPackIdWithNamespaceName:;
- (BOOL)hasTreatmentInAnyOfLayers:withNamespaceName:;
- (id)initWithPaths:factorsState:;
- (id)levelForFactor:withNamespaceName:;
- (void).cxx_destruct;
- (id)factorLevelsWithNamespace:;
- (id)rolloutDeploymentWithNamespaceName:;
- (id)_providerForNamespace:;
- (id)experimentDeploymentWithNamespaceName:;
- (void)setContainer:forNamespaceName:;
- (id)levelForFactor:withNamespace:;
- (BOOL)hasRegisteredNamespaceWithName:;
- (id)factorLevelsWithNamespaceName:;
@end
