@interface HTSLivePublicAreaCommon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage userLabel;
@property (nonatomic) BOOL hasUserLabel;
@property (nonatomic) q userConsumeInRoom;
@property (nonatomic) q userSendGiftCntInRoom;
@property (nonatomic) q individualPriority;
@property (nonatomic) NSMutableDictionary individualStrategyResult;
@property (nonatomic) Q individualStrategyResult_Count;
@property (nonatomic) q supportPin;
@property (nonatomic) HTSLiveSuffixText suffixText;
@property (nonatomic) BOOL hasSuffixText;
@property (nonatomic) NSInteger imAction;
@property (nonatomic) BOOL forbiddenProfile;
@property (nonatomic) IESLiveChatReplyRespInfo replyResp;
@property (nonatomic) BOOL hasReplyResp;
@property (nonatomic) NSMutableDictionary trackingParams;
@property (nonatomic) Q trackingParams_Count;
@property (nonatomic) BOOL needFilterDisplay;
@property (nonatomic) q isFeatured;
+ (id)descriptor;
@end
