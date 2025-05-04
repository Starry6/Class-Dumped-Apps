@interface AWEHPChannelDynamicSchedulingStayTimeMoreLimitStrategy : NSObject
@property (nonatomic) AWEHPChannelDynamicSchedulingLimitStrategyModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryCheckReleaseChannelWithLoadChannelModels:withCurrentChannelId:withWhiteChannelList:withCompletion:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
@end
