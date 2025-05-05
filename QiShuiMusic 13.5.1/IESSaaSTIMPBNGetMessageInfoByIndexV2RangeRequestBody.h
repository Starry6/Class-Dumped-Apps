@interface IESSaaSTIMPBNGetMessageInfoByIndexV2RangeRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) q minIndexInConversationV2;
@property (nonatomic) BOOL hasMinIndexInConversationV2;
@property (nonatomic) q maxIndexInConversationV2;
@property (nonatomic) BOOL hasMaxIndexInConversationV2;
@property (nonatomic) NSInteger direction;
@property (nonatomic) BOOL hasDirection;
+ (id)descriptor;
@end
