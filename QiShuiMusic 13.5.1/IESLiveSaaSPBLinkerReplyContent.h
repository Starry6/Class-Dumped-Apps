@interface IESLiveSaaSPBLinkerReplyContent : GPBMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) IESLiveSaaSPBLinkmicInfo fromUserLinkmicInfo;
@property (nonatomic) BOOL hasFromUserLinkmicInfo;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) IESLiveSaaSPBLinkmicInfo toUserLinkmicInfo;
@property (nonatomic) BOOL hasToUserLinkmicInfo;
@property (nonatomic) q linkType;
@property (nonatomic) q replyStatus;
@property (nonatomic) IESLiveSaaSPBLinkerSetting linkerSetting;
@property (nonatomic) BOOL hasLinkerSetting;
@property (nonatomic) BOOL bizJoinChannel;
@property (nonatomic) NSInteger multiPkMode;
@property (nonatomic) NSString toast;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) NSString kickedUsersUniqueId;
@property (nonatomic) q matchType;
@property (nonatomic) q version;
@property (nonatomic) q anchorUiLayout;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSInteger switchToScene;
@property (nonatomic) NSString battleConfigSetting;
@property (nonatomic) NSString clientAttachedInfo;
+ (id)descriptor;
@end
