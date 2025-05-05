@interface FPDisconnectDomainOperation : FPActionOperation
- (id)initWithDomain:;
- (void)cancel;
- (void).cxx_destruct;
- (void)actionMain;
- (void)_tryDisconnectingSafely:;
@end
