@interface AWEPzSameTimeShowPriorityLimitStrategy : NSObject
@property (nonatomic) <AWEPzStrategyConfigProtocol> config;
@property (nonatomic) AWEPzSameTimeShowPriorityLimitStrategyDataModel dataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithConfig:;
- (void)showComponent:;
- (BOOL)verify:;
- (void)postRemoveEventToComponent:;
- (void)enumerateComponentsWith:resultBlock:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
