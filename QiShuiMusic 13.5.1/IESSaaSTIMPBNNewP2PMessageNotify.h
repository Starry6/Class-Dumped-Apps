@interface IESSaaSTIMPBNNewP2PMessageNotify : GPBMessage
@property (nonatomic) NSInteger sendType;
@property (nonatomic) BOOL hasSendType;
@property (nonatomic) q sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) NSString secSender;
@property (nonatomic) BOOL hasSecSender;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
@property (nonatomic) q createTime;
@property (nonatomic) BOOL hasCreateTime;
+ (id)descriptor;
@end
