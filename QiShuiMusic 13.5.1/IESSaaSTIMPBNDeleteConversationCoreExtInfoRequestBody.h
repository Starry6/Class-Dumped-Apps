@interface IESSaaSTIMPBNDeleteConversationCoreExtInfoRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
