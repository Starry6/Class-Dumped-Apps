@interface AWEIMChatListControllerViewModel : NSObject
@property (nonatomic) NSMutableDictionary cellViewModels;
@property (nonatomic) AWEIMChatCellPreloadConfig preloadConfig;
@property (nonatomic) AWEIMChatListControllerContext controllerContext;
@property (nonatomic) q cellEntryType;
@property (nonatomic) NSString belongPageIdentifier;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)preloadConfig;
- (void)setPreloadConfig:;
- (long long)cellEntryType;
- (BOOL)enableMsgTabUIOpt;
- (void)setEnableMsgTabUIOpt:;
- (id)viewModelForChat:;
- (void)setBelongPageIdentifier:;
- (void)setCellEntryType:;
- (void)p_onUserPrivacySettingChange;
- (id)cellViewModels;
- (void)setCellViewModels:;
- (id)belongPageIdentifier;
- (id)viewModelForConversationId:;
- (void)setCellEntryTypeWithChatListEntryType:;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (id)controllerContext;
- (void)setControllerContext:;
- (void)p_clear;
@end
