@interface AWEIMMessageListCompanyChatIllegalComponent : AWEIMComponentBase
@property (nonatomic) BOOL checkedIllegalNoteMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (BOOL)p_needUpdateIlleralCacheWithMessageCreateTime:;
- (void)p_updateIllegalTime:;
- (void)p_postCompanyAccountSnapshot;
- (BOOL)checkedIllegalNoteMessage;
- (void)setCheckedIllegalNoteMessage:;
- (void)checkIllegalMessageGroup:;
- (id)p_illegalSnapshotKey;
+ (BOOL)canCreateComponentWithContext:;
@end
