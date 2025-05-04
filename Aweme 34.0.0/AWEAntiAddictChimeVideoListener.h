@interface AWEAntiAddictChimeVideoListener : NSObject
@property (nonatomic) @? triggerBeginBlock;
@property (nonatomic) @? triggerEndBlock;
@property (nonatomic) @? triggerRevokeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (void)basicModeDidChange:;
- (long long)listenerType;
- (void)feedDidDisplayAntiAddictVideo:;
- (void)chimeVideoActionShouldRevoke:;
- (id)triggerBeginBlock;
- (id)triggerRevokeBlock;
- (void)setTriggerBeginBlock:;
- (id)triggerEndBlock;
- (void)setTriggerEndBlock:;
- (void)setTriggerRevokeBlock:;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
@end
