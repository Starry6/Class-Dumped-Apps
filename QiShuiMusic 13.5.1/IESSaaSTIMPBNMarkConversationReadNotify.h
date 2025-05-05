@interface IESSaaSTIMPBNMarkConversationReadNotify : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q readIndex;
@property (nonatomic) BOOL hasReadIndex;
@property (nonatomic) q readIndexV2;
@property (nonatomic) BOOL hasReadIndexV2;
+ (id)descriptor;
@end
