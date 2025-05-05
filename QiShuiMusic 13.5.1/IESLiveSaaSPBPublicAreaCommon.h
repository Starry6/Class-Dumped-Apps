@interface IESLiveSaaSPBPublicAreaCommon : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage userLabel;
@property (nonatomic) BOOL hasUserLabel;
@property (nonatomic) q userConsumeInRoom;
@property (nonatomic) q userSendGiftCntInRoom;
@property (nonatomic) q individualPriority;
@property (nonatomic) NSMutableDictionary individualStrategyResult;
@property (nonatomic) Q individualStrategyResult_Count;
@property (nonatomic) q supportPin;
@property (nonatomic) IESLiveSaaSPBSuffixText suffixText;
@property (nonatomic) BOOL hasSuffixText;
@property (nonatomic) NSInteger imAction;
@property (nonatomic) BOOL forbiddenProfile;
@property (nonatomic) IESLiveSaaSPBChatReplyRespInfo replyResp;
@property (nonatomic) BOOL hasReplyResp;
@property (nonatomic) NSMutableDictionary trackingParams;
@property (nonatomic) Q trackingParams_Count;
+ (id)descriptor;
@end
