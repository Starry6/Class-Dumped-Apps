@interface HTSLiveMultiChorusCommonContent : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) HTSLiveMultiChorusInfo multiChorusInfo;
@property (nonatomic) BOOL hasMultiChorusInfo;
+ (id)descriptor;
@end
