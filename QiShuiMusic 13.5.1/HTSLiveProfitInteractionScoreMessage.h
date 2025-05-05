@interface HTSLiveProfitInteractionScoreMessage : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary mixAnchorInfos;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableDictionary anchorInfos;
@property (nonatomic) Q anchorInfos_Count;
@property (nonatomic) NSInteger interactionScoreStatus;
@property (nonatomic) q channelId;
@property (nonatomic) q startTime;
@property (nonatomic) NSInteger interactionScoreAction;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString gameExtra;
- (id)mixAnchorInfos;
+ (id)descriptor;
@end
