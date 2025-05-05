@interface HTSLiveFreeViewRange : IESLivePBBaseMessage
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
+ (id)descriptor;
@end
