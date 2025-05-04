@interface AWEMVLandingStrategyRegister : NSObject
@property (nonatomic) NSMutableArray strategyRegisterList;
- (void)registerStrategy:;
- (id)strategyRegisterList;
- (void)setStrategyRegisterList:;
- (id)createDefaultStrategy;
- (void).cxx_destruct;
+ (void)registerLandingStrategy:;
+ (id)activeStrategyWithLandingParams:;
+ (id)sharedInstance;
@end
