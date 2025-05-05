@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;
- (BOOL)checkScopeIsValidInTransaction:;
@end
