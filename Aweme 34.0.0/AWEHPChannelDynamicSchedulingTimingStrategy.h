@interface AWEHPChannelDynamicSchedulingTimingStrategy : NSObject
@property (nonatomic) AWEHPChannelDynamicSchedulingTimingStrategyModel model;
@property (nonatomic) NSArray limitStrategies;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryCheckReleaseChannelWithLoadChannelModels:withCurrentChannelId:withWhiteChannelList:withCompletion:;
- (void)p_initLimitStrategy;
- (void)setLimitStrategies:;
- (id)limitStrategies;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
@end
