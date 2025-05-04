@interface AWEIMVmojiPanelContext : NSObject
@property (nonatomic) Q resourceStatus;
@property (nonatomic) AWEIMVmojiDataSourceV2 dataSource;
@property (nonatomic) AWEBinding listBinding;
@property (nonatomic) AWEBinding dualBinding;
@property (nonatomic) AWEBinding mergedBinding;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSArray stickers;
- (unsigned long long)resourceStatus;
- (void)setResourceStatus:;
- (void)requestListDataIfNeeded;
- (void)p_updateBinding;
- (BOOL)p_matchDualCondition;
- (id)listBinding;
- (id)dualBinding;
- (id)mergedBinding;
- (void)p_checkStatusUpdatedWithPeerUid:peerSecUid:;
- (void)setMergedBinding:;
- (unsigned long long)p_resourceStatusWithDataFetcher:;
- (void)setListBinding:;
- (void)setDualBinding:;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (id)conversation;
- (void)setConversation:;
- (id)stickers;
@end
