@interface AWEIMConversationDynamicSettingViewModel : NSObject
@property (nonatomic) NSArray conversationSettingModels;
- (id)handleConversationDynamicSettingFromCache:;
- (id)handleConversationDynamicSettingFromServerResponse:;
- (id)conversationSettingModels;
- (id)handleConversationDynamicSettingFromArray:;
- (void)setConversationSettingModels:;
- (void).cxx_destruct;
@end
