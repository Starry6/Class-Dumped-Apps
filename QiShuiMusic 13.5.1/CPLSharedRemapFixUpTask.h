@interface CPLSharedRemapFixUpTask : NSObject
@property (nonatomic) CPLScopedIdentifier sharedCloudScopedIdentifier;
@property (nonatomic) CPLScopedIdentifier realCloudScopedIdentifier;
@property (nonatomic) CPLScopedIdentifier privateCloudScopedIdentifier;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSharedCloudScopedIdentifier:realCloudScopedIdentifier:privateCloudScopedIdentifier:;
- (id)sharedCloudScopedIdentifier;
- (id)realCloudScopedIdentifier;
- (id)privateCloudScopedIdentifier;
@end
