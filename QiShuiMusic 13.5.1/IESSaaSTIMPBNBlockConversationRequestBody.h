@interface IESSaaSTIMPBNBlockConversationRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSInteger blockStatus;
@property (nonatomic) BOOL hasBlockStatus;
@property (nonatomic) BOOL blockNormalOnly;
@property (nonatomic) BOOL hasBlockNormalOnly;
+ (id)descriptor;
@end
