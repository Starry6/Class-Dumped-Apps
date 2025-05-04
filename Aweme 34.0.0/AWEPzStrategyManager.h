@interface AWEPzStrategyManager : NSObject
@property (nonatomic) NSMutableDictionary typeToRegister;
- (BOOL)isStrategyRegister:;
- (id)productStrategyWithStrategyModel:;
- (void)registerAllStrategies;
- (id)typeToRegister;
- (void)registerStrategyWithModel:;
- (id)getAllRegisterStrategies;
- (void)setTypeToRegister:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
