@interface AWEIMConversationFullUserComponent : AWEIMComponentBase
@property (nonatomic) AWEUserModel fullDetailUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishHideMyPostFromUser:status:;
- (void)didFinishShowMyPostToUser:status:;
- (void)didReceiveFollowUserResponse:context:error:;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (id)fullDetailUser;
- (void)setFullDetailUser:;
- (void)didFetchUserFinishedWillDeleteAfterRefactor:fullDetailUser:;
- (void)didFetchFullDetailUser:;
- (BOOL)p_isConversationUnAccept;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
