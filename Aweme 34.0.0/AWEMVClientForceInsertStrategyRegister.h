@interface AWEMVClientForceInsertStrategyRegister : NSObject
@property (nonatomic) NSMutableArray strategyRegisterList;
- (id)createStrategyList;
- (void)registerStrategy:;
- (id)strategyRegisterList;
- (id)createStrategyWithModel:;
- (void)setStrategyRegisterList:;
- (void).cxx_destruct;
+ (void)registerForceInsertStrategy:;
+ (id)createStrategyList;
+ (id)sharedInstance;
@end
