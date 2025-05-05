@interface TRIPurgeabilityLevelMapper : NSObject
- (id)initWithPaths:namespaceMetadataStorage:;
- (void).cxx_destruct;
- (int)purgeabilityLevelForNamespace:;
- (int)availableSpaceClassForFactorNames:namespaceName:;
+ (id)purgeabilityLevelFromCacheDeleteUrgency:;
+ (int)availableSpaceClassFromPurgeabilityLevel:;
@end
