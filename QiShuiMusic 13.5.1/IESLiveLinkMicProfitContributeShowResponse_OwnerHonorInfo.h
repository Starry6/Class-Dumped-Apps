@interface IESLiveLinkMicProfitContributeShowResponse_OwnerHonorInfo : IESLivePBBaseMessage
@property (nonatomic) q totalNum;
@property (nonatomic) NSMutableArray hitGuestHonorInfoListArray;
@property (nonatomic) Q hitGuestHonorInfoListArray_Count;
@property (nonatomic) IESLiveLinkMicProfitContributeShowResponse_PlayModeHonorInfo playmodeHonorInfo;
@property (nonatomic) BOOL hasPlaymodeHonorInfo;
+ (id)descriptor;
@end
