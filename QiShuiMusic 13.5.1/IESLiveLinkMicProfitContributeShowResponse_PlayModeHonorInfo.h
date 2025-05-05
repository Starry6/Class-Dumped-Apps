@interface IESLiveLinkMicProfitContributeShowResponse_PlayModeHonorInfo : IESLivePBBaseMessage
@property (nonatomic) q honorLevel;
@property (nonatomic) q honorSubLevel;
@property (nonatomic) HTSLiveHonorIconContent honorIconContent;
@property (nonatomic) BOOL hasHonorIconContent;
@property (nonatomic) HTSLiveUser titleSponsor;
@property (nonatomic) BOOL hasTitleSponsor;
+ (id)descriptor;
@end
