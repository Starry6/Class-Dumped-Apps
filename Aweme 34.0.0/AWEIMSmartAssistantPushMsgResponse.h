@interface AWEIMSmartAssistantPushMsgResponse : GPBMessage
@property (nonatomic) NSMutableArray contentsArray;
@property (nonatomic) Q contentsArray_Count;
@property (nonatomic) q userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) q commerceId;
@property (nonatomic) BOOL hasCommerceId;
@property (nonatomic) q messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) q conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q recommendId;
@property (nonatomic) BOOL hasRecommendId;
+ (id)descriptor;
@end
