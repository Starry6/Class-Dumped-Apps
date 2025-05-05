@interface TRIPersistedRolloutAllocationStatus_NamespaceFactorPack : TRIPBMessage
@property (nonatomic) NSString namespace_p;
@property (nonatomic) BOOL hasNamespace_p;
@property (nonatomic) NSString factorPack;
@property (nonatomic) BOOL hasFactorPack;
+ (id)descriptor;
@end
