@interface AWEIMSmartAssistantResponse : GPBMessage
@property (nonatomic) AWEIMSmartAssistantManipulateAssistantMsgResponse manipulateAssistantMsgResponse;
@property (nonatomic) BOOL hasManipulateAssistantMsgResponse;
@property (nonatomic) AWEIMSmartAssistantQuickReplyRecommendGetResponse quickReplyRecommendGetResponse;
@property (nonatomic) BOOL hasQuickReplyRecommendGetResponse;
@property (nonatomic) AWEIMSmartAssistantPushMsgResponse pushAssistantMsgResponse;
@property (nonatomic) BOOL hasPushAssistantMsgResponse;
+ (id)descriptor;
@end
