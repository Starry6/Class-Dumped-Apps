@interface HTSLiveLuckyBoxRewardMessage : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray rewardedMixUserIdArray;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q boxId;
@property (nonatomic) NSString boxIdStr;
@property (nonatomic) NSMutableArray rewardedUserOpenidArray;
@property (nonatomic) Q rewardedUserOpenidArray_Count;
@property (nonatomic) NSMutableArray rewardedDetailArray;
@property (nonatomic) Q rewardedDetailArray_Count;
@property (nonatomic) q rewardMessageType;
@property (nonatomic) NSString relatedItemId;
- (id)rewardedMixUserIdArray;
- (void)setRewardedMixUserIdArray:;
+ (id)descriptor;
@end
