@interface SBSStateDumpService : SBSAbstractSystemService
- (void)requestStateDump:withCompletion:;
- (void)disableRemoteStateDumpWithCompletion:;
- (void)enableRemoteStateDumpWithTimeout:completion:;
@end
