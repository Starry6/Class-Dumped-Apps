@interface AWEIMShareContactListContactsConfig : NSObject
@property (nonatomic) BOOL enableMergeRecentShare;
@property (nonatomic) BOOL enableAddWechatFriend;
@property (nonatomic) BOOL enableGroupChat;
@property (nonatomic) BOOL enableMessageTabSort;
@property (nonatomic) BOOL enableMoreFriend;
@property (nonatomic) BOOL enableRecentShareFlow;
@property (nonatomic) <AWEIMShareModelProtocol> insertShareModelToTop;
- (BOOL)enableGroupChat;
- (id)insertShareModelToTop;
- (void)setInsertShareModelToTop:;
- (BOOL)enableRecentShareFlow;
- (BOOL)enableMoreFriend;
- (void)setEnableMessageTabSort:;
- (BOOL)enableMergeRecentShare;
- (BOOL)enableAddWechatFriend;
- (BOOL)enableMessageTabSort;
- (void)setEnableMergeRecentShare:;
- (void)setEnableGroupChat:;
- (void)setEnableMoreFriend:;
- (void)setEnableAddWechatFriend:;
- (void)setEnableRecentShareFlow:;
- (id)init;
- (void).cxx_destruct;
@end
