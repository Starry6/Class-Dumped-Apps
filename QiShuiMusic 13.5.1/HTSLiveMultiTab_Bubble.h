@interface HTSLiveMultiTab_Bubble : IESLivePBBaseMessage
@property (nonatomic) NSInteger switch_p;
@property (nonatomic) q bubbleId;
@property (nonatomic) q duration;
@property (nonatomic) q delay;
@property (nonatomic) NSString bubbleText;
+ (id)descriptor;
@end
