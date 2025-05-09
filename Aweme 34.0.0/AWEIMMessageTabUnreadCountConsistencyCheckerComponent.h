@interface AWEIMMessageTabUnreadCountConsistencyCheckerComponent : AWEIMComponentBase
@property (nonatomic) q messageTabUIUnreadCount;
@property (nonatomic) Q messageTabUIBadgeType;
@property (nonatomic) NSNumber messageTabTotalUnreadCount;
@property (nonatomic) q messageTabImSubUnreadCount;
@property (nonatomic) q messageListLocalConvTotalUnreadCount;
@property (nonatomic) NSMutableDictionary chatCellCidToUnreadCountMutableDict;
@property (nonatomic) NSMutableDictionary chatCellCidToHasBrowsedUnreadCountMutableDict;
@property (nonatomic) NSMutableArray chatCellUnreadCountChangeInfoArr;
@property (nonatomic) BOOL hasReportedFirst;
@property (nonatomic) BOOL hasReportedInconsistent;
@property (nonatomic) BOOL hasLoadedTotalChats;
@property (nonatomic) BOOL hasEnteredMessageTab;
@property (nonatomic) BOOL hasFetchedOfficialChats;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)componentDidMounted:;
- (id)checkerQueue;
- (void)onAppDidEnterBackground:;
- (void)handleEnterMessageTabEvent;
- (void)didLoadNewMessages:;
- (void)didLoadOfficialChats:;
- (void)didEndLoadOfficialChatsWithError:;
- (void)updateUIChatUnreadCountWithCid:unreadCount:chatType:;
- (void)updateDataChatWithOldChatModel:newChatModel:;
- (void)removeDataChatWithCid:chatType:;
- (void)onAppDidBecomeActive:;
- (void)setChatCellCidToUnreadCountMutableDict:;
- (void)setChatCellCidToHasBrowsedUnreadCountMutableDict:;
- (void)setChatCellUnreadCountChangeInfoArr:;
- (void)p_updateMessageEntryUIUnreadCountWithBadgeInfo:;
- (void)updateMessageTabUnreadCountWithTotalUnreadCount:imSubUnreadCount:;
- (void)handleTabDidChangeNotification:;
- (BOOL)hasFetchedOfficialChats;
- (void)setHasFetchedOfficialChats:;
- (void)updateChatBrowsedStatusWithCid:hasBrowsedUnreadCount:;
- (id)chatCellCidToUnreadCountMutableDict;
- (id)messageListLocalChatTypes;
- (long long)messageListLocalConvTotalUnreadCount;
- (void)setMessageListLocalConvTotalUnreadCount:;
- (void)addOneChatCellUnreadCountChangeInfoWithCid:oldUnreadCount:newUnreadCount:;
- (void)tryToCheckConsistent;
- (id)chatCellCidToHasBrowsedUnreadCountMutableDict;
- (long long)messageTabImSubUnreadCount;
- (id)messageTabTotalUnreadCount;
- (void)setMessageTabImSubUnreadCount:;
- (void)setMessageTabTotalUnreadCount:;
- (void)setMessageTabUIUnreadCount:;
- (void)setMessageTabUIBadgeType:;
- (BOOL)hasReportedInconsistent;
- (BOOL)hasLoadedTotalChats;
- (void)setHasLoadedTotalChats:;
- (BOOL)hasEnteredMessageTab;
- (void)checkConsistent;
- (long long)messageTabUIUnreadCount;
- (unsigned long long)messageTabUIBadgeType;
- (void)checkConsistentWithChatListTotalUnreadCount:messageTabTotalUnreadCount:messageListLocalConvTotalUnreadCount:messageTabImSubUnreadCount:messageTabUIUnreadCount:messageTabUIBadgeType:version:;
- (BOOL)hasReportedFirst;
- (void)setHasReportedFirst:;
- (void)setHasReportedInconsistent:;
- (id)messageListSubUCLoggerQueue;
- (id)chatCellUnreadCountChangeInfoArr;
- (void)tryToLogUIChatUnreadCountInfo;
- (void)setHasEnteredMessageTab:;
- (void)stopToCheckConsistent;
- (void)stopToLogUIChatUnreadCountInfo;
- (void)messageTabViewDidLoad:;
- (void)dealloc;
- (void)clearAll;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
