@interface IESSaaSTIMPBNSetConversationCoreInfoRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString desc;
@property (nonatomic) BOOL hasDesc;
@property (nonatomic) NSString icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString notice;
@property (nonatomic) BOOL hasNotice;
@property (nonatomic) BOOL isNameSet;
@property (nonatomic) BOOL hasIsNameSet;
@property (nonatomic) BOOL isDescSet;
@property (nonatomic) BOOL hasIsDescSet;
@property (nonatomic) BOOL isIconSet;
@property (nonatomic) BOOL hasIsIconSet;
@property (nonatomic) BOOL isNoticeSet;
@property (nonatomic) BOOL hasIsNoticeSet;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
