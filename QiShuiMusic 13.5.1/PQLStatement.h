@interface PQLStatement : NSObject
@property (nonatomic) BOOL isTraced;
- (id)initWithStatement:forDB:;
- (void)dealloc;
- (BOOL)isTraced;
- (void)bindArguments:db:;
- (id)initWithQueryBuilder:db:cache:;
- (id)translate:hasInjections:arguments:;
- (BOOL)_prepare:withDB:;
- (void)bindFromArray:db:;
- (void)keepBindAlive:;
- (id)initWithFormat:arguments:db:cache:;
- (void).cxx_destruct;
- (id)translate:withBuilder:;
- (id)description;
- (void)invalidate;
- (void)unbindForDB:returnedRows:;
@end
