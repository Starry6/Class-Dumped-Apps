@interface IESSaaSTIMPBNSendMessageP2PRequestBody : GPBMessage
@property (nonatomic) NSInteger sendType;
@property (nonatomic) BOOL hasSendType;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) GPBInt64Array visibleUserArray;
@property (nonatomic) Q visibleUserArray_Count;
@property (nonatomic) GPBInt64Array invisibleUserArray;
@property (nonatomic) Q invisibleUserArray_Count;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
+ (id)descriptor;
@end
