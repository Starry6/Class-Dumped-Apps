@interface HTSLiveTimePoint : IESLivePBBaseMessage
@property (nonatomic) q start;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
