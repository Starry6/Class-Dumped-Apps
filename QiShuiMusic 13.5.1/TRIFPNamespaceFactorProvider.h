@interface TRIFPNamespaceFactorProvider : NSObject
@property (nonatomic) BOOL promotable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)experimentId;
- (id)treatmentId;
- (id)namespaceName;
- (int)deploymentId;
- (id)init;
- (void)dealloc;
- (id)initWithPath:parentId:deploymentId:promotable:;
- (void)dispose;
- (unsigned int)namespaceId;
- (id)rolloutId;
- (id)factorLevels;
- (id)levelForFactor:;
- (id)_factorLevelsWithFactorPackData:loadedFromProtoPath:referencePath:outFactorPackId:outNamespaceName:outNCVs:;
- (BOOL)promotable;
- (unsigned int)namespaceCompatibilityVersion;
- (void).cxx_destruct;
- (id)initWithParentId:deploymentId:promotable:;
- (id)_populateMAPathsForFactorLevels:loadedFromProtoPath:;
- (id)_maAutoAssetReferencedInDir:byFactorName:;
@end
