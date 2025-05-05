@interface HTSLiveCardTrigger : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) q value;
+ (id)descriptor;
@end
