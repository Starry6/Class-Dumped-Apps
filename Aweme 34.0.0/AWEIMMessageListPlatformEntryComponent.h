@interface AWEIMMessageListPlatformEntryComponent : AWEIMComponentBase
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (id)chatPanelModelWithPlatformChatModelType:;
- (void)p_onItemDidSelectedFromChatPanelWithChatPanelModel:;
- (void)handlePanelButtonShowAction:;
- (void)handleGroupBuyShowAction:;
- (void)p_performActionWithModel:;
- (void)p_checkChatPanelAvailabilityWithModel:completion:;
- (id)p_URLWithConversationContextFromOriginalURL:;
- (void)p_chatPanelClickReportWithPlatformChatPanelModel:;
- (id)p_conversationContext;
- (id)p_converastionType;
+ (BOOL)canCreateComponentWithContext:;
@end
