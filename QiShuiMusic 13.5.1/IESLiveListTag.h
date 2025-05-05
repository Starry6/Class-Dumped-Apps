@interface IESLiveListTag : IESLivePBBaseMessage
@property (nonatomic) NSInteger listTagType;
@property (nonatomic) NSInteger tagOneOfCase;
@property (nonatomic) IESLiveListTagFansClubContent fansClubTag;
@property (nonatomic) IESLiveListTagHonorLevelContent honorLevelTag;
@property (nonatomic) IESLiveListTagFriendContent friendTag;
@property (nonatomic) IESLiveListTagFansContent fansTag;
@property (nonatomic) IESLiveListTagEcomViewContent ecomViewTag;
@property (nonatomic) IESLiveListTagEcomFansClubContent ecomFansClubTag;
+ (id)descriptor;
@end
