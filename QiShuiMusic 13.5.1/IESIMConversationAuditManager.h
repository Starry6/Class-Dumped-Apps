@interface IESIMConversationAuditManager : NSObject
@property (nonatomic) IESSaaSTIMOConversationAuditBriefDataSource briefDataSource;
@property (nonatomic) IESSaaSTIMOConversationAuditDataSource dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESIMConversationAuditManagerDelegate> delegate;
- (id)briefDataSource;
- (void)fetchUnreadAuditWithCompletion:;
- (void)markReadAllAuditWithCompletion:;
- (void)ackConversationApplyWithApplyID:agree:bizExt:completion:;
- (void)briefDataSource:onNewApplyAck:;
- (void)briefDataSource:onNewConversationApply:;
- (void)disappearAuditUnreadCount;
- (void)fetchAuditSwitchStatusWithShortID:type:completion:;
- (void)fetchNewestAuditListWithLimit:completion:;
- (void)loadMoreAuditListWithLimit:completion:;
- (void)setBriefDataSource:;
- (void)updateAuditSwitchStatusWithShortID:type:switchStatus:completion:;
- (void)setDataSource:;
- (id)init;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
@end
