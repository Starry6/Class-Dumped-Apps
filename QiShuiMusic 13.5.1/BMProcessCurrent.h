@interface BMProcessCurrent : BMProcess
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL isRunningInUserContext;
@property (nonatomic) BOOL reliesOnLegacyDirectAccess;
- (BOOL)reliesOnLegacyDirectAccess;
- (id)_initWithAuditToken:;
- (BOOL)isManaged;
- (void).cxx_destruct;
- (BOOL)isRunningInUserContext;
@end
