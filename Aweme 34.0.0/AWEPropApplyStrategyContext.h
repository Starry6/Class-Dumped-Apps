@interface AWEPropApplyStrategyContext : NSObject
@property (nonatomic) NSArray strategyArray;
@property (nonatomic) <AWEPropApplyStrategyProtocol> currentStrategy;
@property (nonatomic) AWEPropApplyNormalStrategy normalStrategy;
@property (nonatomic) AWEPropApplyRawTypeStrategy rawTypeStrategy;
@property (nonatomic) <AWEPropApplyContextProtocol> applyContext;
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) BOOL isPrepareProcessRunning;
- (void)setCurrentStrategy:;
- (id)strategyArray;
- (void)setStrategyArray:;
- (id)initWithApplyContext:;
- (BOOL)isPrepareProcessRunning;
- (void)updateStrategyWithEffectModel:;
- (void)applyProp:currentProp:;
- (id)normalStrategy;
- (void)setIsPrepareProcessRunning:;
- (id)applyContext;
- (id)rawTypeStrategy;
- (void)setNormalStrategy:;
- (void)setRawTypeStrategy:;
- (void)setApplyContext:;
- (void)setCache:;
- (id)cache;
- (void).cxx_destruct;
- (id)currentStrategy;
@end
