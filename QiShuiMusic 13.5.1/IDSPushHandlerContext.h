@interface IDSPushHandlerContext : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSSet wakingTopics;
@property (nonatomic) NSSet opportunisticTopics;
@property (nonatomic) NSSet nonWakingTopics;
@property (nonatomic) NSSet commands;
- (void)setOpportunisticTopics:;
- (id)opportunisticTopics;
- (id)commands;
- (void)setNonWakingTopics:;
- (id)wakingTopics;
- (void).cxx_destruct;
- (id)initWithQueue:wakingTopics:opportunisticTopics:nonWakingTopics:commands:;
- (void)setWakingTopics:;
- (void)setCommands:;
- (id)queue;
- (id)nonWakingTopics;
@end
