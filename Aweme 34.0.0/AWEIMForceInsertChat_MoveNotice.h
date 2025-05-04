@interface AWEIMForceInsertChat_MoveNotice : AWEIMComponentBase
@property (nonatomic) AWEIMChatModel chatModel;
@property (nonatomic) RxDeferred fetchNoticeMultiPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)chatModel;
- (void)setChatModel:;
- (id)forceInsertDecisionNode;
- (void)didClickForceInsertChatCell:chatCell:chatListVC:;
- (void)didRemoveForceInsertChat:;
- (void)didShowForceInsertChat:;
- (void)trackDeleteForceInsertChat:;
- (void)trackClickSwipeDeleteChat:deleteMethod:;
- (void)setFetchNoticeMultiPromise:;
- (void)didLoadNewMessages:;
- (void)didLoadOfficialChats:;
- (void)didReturnShouldGuideDismiss:;
- (id)fetchNoticeMultiPromise;
- (void)dealloc;
- (unsigned long long)priority;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)p_canShowMessageTabFakeNoticeCell;
+ (id)imMoveNoticeConfig;
+ (BOOL)p_canShowMessageTabFakeNoticeCellForServiceType:;
@end
