@interface AWEHPCombineStrategyCenter : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableArray strategies;
- (void)setStrategies:;
- (void)onRequestSuccess;
- (BOOL)checkCanRequestWithScene:;
- (BOOL)checkCanRequestWithRequest:;
- (void)registerStrategyWithClass:;
- (id)safeGetStrategies;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void)setup;
- (void).cxx_destruct;
- (id)strategies;
@end
