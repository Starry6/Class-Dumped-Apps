@interface AWEIMMessageConversationMixPhotoTimeTrackerComponent : AWEIMComponentBase
@property (nonatomic) NSMutableDictionary clientTimeStampInfoDict;
@property (nonatomic) NSMutableDictionary serverTimeStampInfoDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)onMixImageMessageUpdated:;
- (id)vcParent;
- (void)onStartOrJoinMixPhoto:;
- (void)setClientTimeStampInfoDict:;
- (void)setServerTimeStampInfoDict:;
- (void)tryMatchClientTimeStampInfoWithServerTimeStampInfo:;
- (void)tryMatchServerTimeStampInfoWithClientTimeStampInfo:;
- (id)serverTimeStampInfoDict;
- (id)stringOfActionType:;
- (void)trackPushDurationWithContext:;
- (id)clientTimeStampInfoDict;
- (void)dealloc;
- (void).cxx_destruct;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
