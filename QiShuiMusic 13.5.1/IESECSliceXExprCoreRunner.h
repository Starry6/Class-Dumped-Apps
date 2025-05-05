@interface IESECSliceXExprCoreRunner : NSObject
@property (nonatomic) IESECSliceXExprCoreFuncManager funcManager;
@property (nonatomic) IESECSliceXExprCoreOperatorManager operatorManager;
@property (nonatomic) IESECSliceXExprCoreParser parser;
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} lock;
- (id)operatorManager;
- (void)setFuncManager:;
- (void)cleanupParseResultCache;
- (id)execute:withEnv:;
- (id)funcManager;
- (BOOL)parseExpr:;
- (void)registerFunc:;
- (void)setOperatorManager:;
- (id)init;
- (void)dealloc;
- (void)setCache:;
- (id)lock;
- (void).cxx_destruct;
- (id)parser;
- (id)cache;
- (void)setLock:;
- (void)setParser:;
- (void)registerOperator:;
@end
