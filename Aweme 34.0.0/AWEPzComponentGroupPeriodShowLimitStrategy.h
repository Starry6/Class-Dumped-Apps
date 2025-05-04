@interface AWEPzComponentGroupPeriodShowLimitStrategy : NSObject
@property (nonatomic) <AWEPzStrategyModelProtocol> configModel;
@property (nonatomic) AWEPzComponentGroupPeriodShowLimitStrategyDataModel dataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithModel:;
- (id)configModel;
- (void)setConfigModel:;
- (BOOL)verify:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
