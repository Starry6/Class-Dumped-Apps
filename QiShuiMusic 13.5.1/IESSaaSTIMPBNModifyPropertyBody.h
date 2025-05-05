@interface IESSaaSTIMPBNModifyPropertyBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) NSMutableArray modifyPropertyContentArray;
@property (nonatomic) Q modifyPropertyContentArray_Count;
+ (id)descriptor;
@end
