@interface AWEHPFirstPeriodLandingStrategy : NSObject
@property (nonatomic) <AWEHPLandingContextProtocol> context;
@property (nonatomic) <AWEHPLandingStrategyModelProtocol> strategy;
@property (nonatomic) AWEHPFirstPeriodLandingModel config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLandingContext:;
- (BOOL)shouldStrategyEffect;
- (void)endLandingWithSuccess:;
- (id)getTabLandingModel;
- (id)p_readRecordWithConfig:;
- (long long)p_generateCycleWithTimeInterval:;
- (void)p_writeRecord:;
- (id)strategy;
- (void)setConfig:;
- (id)config;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setStrategy:;
@end
