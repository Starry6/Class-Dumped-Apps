@interface HTSLiveTrayEffectMessage_PriorityConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSInteger priorityLowerStrategy;
@property (nonatomic) NSInteger priorityEqualStrategy;
@property (nonatomic) NSInteger priorityHigherStrategy;
+ (id)descriptor;
@end
