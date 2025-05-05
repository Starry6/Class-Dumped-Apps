@interface HTSLiveCornerMarkReach : IESLivePBBaseMessage
@property (nonatomic) BOOL needReach;
@property (nonatomic) q duration;
@property (nonatomic) q elemType;
+ (id)descriptor;
@end
