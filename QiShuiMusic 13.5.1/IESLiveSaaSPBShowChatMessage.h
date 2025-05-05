@interface IESLiveSaaSPBShowChatMessage : GPBMessage
@property (nonatomic) BOOL isFakeMessage;
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q episodeId;
@property (nonatomic) NSString content;
@property (nonatomic) q agreeMsgId;
@property (nonatomic) BOOL visibleToSender;
@property (nonatomic) NSInteger priorityLevel;
@property (nonatomic) NSInteger effectType;
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) IESLiveSaaSPBPublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) IESLiveSaaSPBLandscapeAreaCommon landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (nonatomic) IESLiveSaaSPBImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSMutableArray fontColorValueArray;
@property (nonatomic) Q fontColorValueArray_Count;
@property (nonatomic) IESLiveSaaSPBImage giftImage;
@property (nonatomic) BOOL hasGiftImage;
@property (nonatomic) IESLiveSaaSPBCommentRoleConfig commentRole;
@property (nonatomic) BOOL hasCommentRole;
@property (nonatomic) NSInteger vsMessageType;
- (BOOL)isFakeMessage;
- (void)setIsFakeMessage:;
+ (id)descriptor;
@end
