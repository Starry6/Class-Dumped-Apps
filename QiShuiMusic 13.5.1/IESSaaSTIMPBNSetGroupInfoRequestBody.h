@interface IESSaaSTIMPBNSetGroupInfoRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSString groupName;
@property (nonatomic) BOOL hasGroupName;
@property (nonatomic) NSString groupDesc;
@property (nonatomic) BOOL hasGroupDesc;
@property (nonatomic) NSString groupIcon;
@property (nonatomic) BOOL hasGroupIcon;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
