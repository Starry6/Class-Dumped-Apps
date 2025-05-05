@interface ChatResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q msgId;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSString msgIdStr;
@property (nonatomic) NSString fullscreenTextColor;
@property (nonatomic) ChatResponse_LandscapeAreaCommon landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) HTSLiveImage identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
@property (nonatomic) IESLiveChatReplyRespInfo replyResp;
@property (nonatomic) BOOL hasReplyResp;
@property (nonatomic) HTSLiveText rtfContentV2;
@property (nonatomic) BOOL hasRtfContentV2;
+ (id)descriptor;
@end
