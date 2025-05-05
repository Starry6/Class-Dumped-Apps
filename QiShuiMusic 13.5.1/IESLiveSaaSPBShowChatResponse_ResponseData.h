@interface IESLiveSaaSPBShowChatResponse_ResponseData : GPBMessage
@property (nonatomic) q id_p;
@property (nonatomic) q msgId;
@property (nonatomic) NSString content;
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) IESLiveSaaSPBImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSString msgIdStr;
@property (nonatomic) NSString fullscreenTextColor;
@property (nonatomic) NSMutableArray colorValueArray;
@property (nonatomic) Q colorValueArray_Count;
@property (nonatomic) IESLiveSaaSPBShowChatResponse_LandscapeAreaCommon landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (nonatomic) IESLiveSaaSPBShowChatResponse_CommentRoleConfig commentRole;
@property (nonatomic) BOOL hasCommentRole;
@property (nonatomic) NSInteger vsMessageType;
@property (nonatomic) NSInteger effectType;
+ (id)descriptor;
@end
