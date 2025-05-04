@interface AWEIMSmartAssistantSendPushMsgRequest : GPBMessage
@property (nonatomic) NSInteger cmd;
@property (nonatomic) BOOL hasCmd;
@property (nonatomic) AWEIMSmartAssistantManipulateAssistantMsgRequest manipulateAssistantMsgRequest;
@property (nonatomic) BOOL hasManipulateAssistantMsgRequest;
@property (nonatomic) AWEIMSmartAssistantQuickReplyRecommendGetRequest quickReplyRecommendGetRequest;
@property (nonatomic) BOOL hasQuickReplyRecommendGetRequest;
+ (id)descriptor;
@end
