@interface AWEIMMessageTabPrivateChatMgrComponent : AWEIMComponentBase
@property (nonatomic) AWEButton barIconPrivateChat;
@property (nonatomic) <AWEIMMessageTabPlusButtonInterface> plusButtonService;
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (BOOL)canShowInPlusPanel;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (id)plusButtonModel;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)canShowEntryView;
- (void)setPlusButtonService:;
- (id)plusButtonService;
- (id)barIconPrivateChat;
- (void)p_didClickBarPrivateChatButton;
- (void)p_transferToPrivateChatHelper;
- (void)setBarIconPrivateChat:;
- (void).cxx_destruct;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
@end
