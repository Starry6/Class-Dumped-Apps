@interface ShowChatResponse_ResponseData : IESLivePBBaseMessage
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
@property (nonatomic) NSMutableArray colorValueArray;
@property (nonatomic) Q colorValueArray_Count;
@property (nonatomic) ShowChatResponse_LandscapeAreaCommon landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (nonatomic) ShowChatResponse_CommentRoleConfig commentRole;
@property (nonatomic) BOOL hasCommentRole;
@property (nonatomic) HTSLiveCommentMedal medal;
@property (nonatomic) BOOL hasMedal;
@property (nonatomic) NSInteger vsMessageType;
@property (nonatomic) NSInteger effectType;
+ (id)descriptor;
@end
