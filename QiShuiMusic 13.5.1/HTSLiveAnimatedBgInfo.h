@interface HTSLiveAnimatedBgInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveShowArea showArea;
@property (nonatomic) BOOL hasShowArea;
@property (nonatomic) NSString fileFormat;
@property (nonatomic) HTSLiveImage animatedBg;
@property (nonatomic) BOOL hasAnimatedBg;
+ (id)descriptor;
@end
