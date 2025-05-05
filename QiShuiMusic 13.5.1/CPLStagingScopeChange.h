@interface CPLStagingScopeChange : CPLScopeChange
@property (nonatomic) CPLScopeChange stagedScopeChange;
@property (nonatomic) NSData stagedTransportScope;
@property (nonatomic) q stagedScopeFlags;
- (void).cxx_destruct;
- (id)stagedScopeChange;
- (void)setStagedScopeChange:;
- (id)stagedTransportScope;
- (void)setStagedTransportScope:;
- (long long)stagedScopeFlags;
- (void)setStagedScopeFlags:;
@end
