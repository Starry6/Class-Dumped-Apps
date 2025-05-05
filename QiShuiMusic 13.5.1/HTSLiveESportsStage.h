@interface HTSLiveESportsStage : IESLivePBBaseMessage
@property (nonatomic) NSInteger currentStage;
@property (nonatomic) NSInteger finalStage;
+ (id)descriptor;
@end
