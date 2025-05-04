@interface AWEIMMessageListActionDeleteComponent : AWEIMComponentBase
@property (nonatomic) AWEIMActionSheetItemModel deleteItemModel;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMMessageDataProtocol> messageDataController;
@property (nonatomic) AWEIMMessageListViewController messageListViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)messageDataController;
- (void)setMessageDataController:;
- (id)messageListViewController;
- (void)p_reportDelete:;
- (id)deleteItemModel;
- (void)p_bizTrackDeleteMsg:deleteCount:;
- (void)p_reportMultipleDelegateWithCount:;
- (void)p_onDeleteItemTapped;
- (void)setDeleteItemModel:;
- (void)setMessageListViewController:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
@end
