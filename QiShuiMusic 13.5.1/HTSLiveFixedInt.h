@interface HTSLiveFixedInt : IESLivePBBaseMessage
@property (nonatomic) q value;
@property (nonatomic) q scale;
+ (id)descriptor;
@end
