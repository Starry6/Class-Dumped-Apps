@interface BDREExprRunner : NSObject
@property (nonatomic) BDREFuncManager funcManager;
@property (nonatomic) BDREOperatorManager operatorManager;
@property (nonatomic) BDREExprCacheManager cacheManager;
- (id)operatorManager;
- (void)logEventWithResponse:expr:uuid:;
- (void)setFuncManager:;
- (id)commandsFromExpr:;
- (id)execute:preCommands:withEnv:uuid:;
- (id)execute:withEnv:;
- (id)execute:withEnv:uuid:;
- (id)funcManager;
- (id)initWithShared;
- (void)logErrorEventWithCode:cel:message:;
- (void)logExecuteExprWithResponse:expr:uuid:;
- (void)registerFunc:;
- (void)setOperatorManager:;
- (id)init;
- (void).cxx_destruct;
- (id)cacheManager;
- (void)setCacheManager:;
- (void)registerOperator:;
+ (id)sharedRunner;
@end
