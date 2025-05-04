@interface AWENoticeRecallMsgManager : NSObject
@property (nonatomic) NSMutableSet recalMsgSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)recallNotices;
- (BOOL)shouldRemoveMsg:groupID:;
- (id)updateNotiRespModel:;
- (void)setRecalMsgSet:;
- (void)__updateRecallMessageInfo:;
- (id)recalMsgSet;
- (BOOL)__shouldUpdateNotiResponseMsg:byRecallMsg:;
- (id)__updateNotiResponseMsg:byRecallMsg:;
- (BOOL)__shouldRemoveMsg:groupID:byRecallMsg:;
- (id)init;
- (void).cxx_destruct;
- (void)initData;
+ (id)sharedInstance;
@end
