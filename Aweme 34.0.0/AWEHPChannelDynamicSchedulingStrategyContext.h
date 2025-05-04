@interface AWEHPChannelDynamicSchedulingStrategyContext : NSObject
@property (nonatomic) <AWEHPChannelDynamicSchedulingTimingStrategyProtocol> strategy;
@property (nonatomic) NSString triggerReason;
- (id)strategy;
- (id)description;
- (void).cxx_destruct;
- (void)setStrategy:;
- (void)setTriggerReason:;
- (id)triggerReason;
@end
