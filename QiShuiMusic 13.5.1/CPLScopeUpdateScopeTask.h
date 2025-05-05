@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskIdentifier;
- (void)task:didFinishWithError:;
- (void)cancel;
- (void)task:didProgress:userInfo:;
- (void).cxx_destruct;
- (void)launch;
- (BOOL)checkScopeIsValidInTransaction:;
- (id)initWithEngineLibrary:session:clientCacheIdentifier:scope:transportScope:;
- (void)_lookForStagingScopeWithIdentifier:transportScope:;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:;
- (void)_markScopeAsFeatureDisabledWithFlags:;
- (void)_markScopeHasBadTransportScopeWithError:;
- (void)_updateScopeWithNewScopeType:updatedScopeChange:updatedFlags:oldTransportScope:updatedTransportScope:;
- (void)_updateScopeChangeForPrimaryScopeRelatedToSharingScopeWithIdentifier:completionHandler:;
- (void)_performAdditionalChecksWithNewScopeType:updatedScopeChange:updatedFlags:oldTransportScope:updatedTransportScope:completionHandler:;
- (void)_getLibraryInfo;
- (void)_fetchTransportScope;
+ (void)_updateScopeWithNewScopeType:scope:updatedScopeChange:updatedFlags:oldTransportScope:updatedTransportScope:shouldUpdateTransportScope:store:transport:inTransaction:;
+ (void)updateScopeWithNewScopeType:scope:updatedScopeChange:updatedFlags:oldTransportScope:updatedTransportScope:shouldUpdateTransportScope:store:transport:inTransaction:;
@end
