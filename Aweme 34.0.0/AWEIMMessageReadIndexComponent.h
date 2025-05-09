@interface AWEIMMessageReadIndexComponent : AWEIMComponentBase
@property (nonatomic) q lastHasReadOrderIndex;
@property (nonatomic) q lastestOrderIndex;
@property (nonatomic) <AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) q lastMarkPullIndex;
@property (nonatomic) AWEIMMessage latestReadMessage;
@property (nonatomic) <AWEIMMessageTableViewInterface> tableViewInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterFirstScreenDataInitialize;
- (void)reloadDataTransactionCompleted;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)tableView:awe_partDisplayCell:forRowAtIndexPath:;
- (void)tableViewAllDidEndScroll:;
- (void)setMessageListData:;
- (id)messageListData;
- (long long)lastHasReadOrderIndex;
- (long long)lastestOrderIndex;
- (void)setLastMarkPullIndex:;
- (void)setTableViewInterface:;
- (void)setLastHasReadOrderIndex:;
- (void)setLastestOrderIndex:;
- (long long)lastMarkPullIndex;
- (id)latestReadMessage;
- (void)p_markMessageReadWithForce:;
- (void)setLatestReadMessage:;
- (void)p_markMessageRead;
- (id)tableViewInterface;
- (BOOL)isInitialized;
- (void).cxx_destruct;
- (id)conversation;
- (void)setIsInitialized:;
+ (BOOL)enableMarkOnscreenMessageRead;
@end
