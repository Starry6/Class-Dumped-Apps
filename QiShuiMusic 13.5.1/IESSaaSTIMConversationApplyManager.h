@interface IESSaaSTIMConversationApplyManager : NSObject
@property (nonatomic) IESSaaSTIMMulticastDelegate multicastDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addNotifyObserver:;
- (void)checkConversationApplyWithApplyID:applyStatus:bizExt:completion:;
- (void)clearConversationAuditUnreadCountWithCompletion:;
- (void)fetchConversationAppliesWithCursor:limit:completion:;
- (void)fetchConversationApplyWithUserID:shortID:type:completion:;
- (void)fetchConversationAuditSwitchWithShortID:type:completion:;
- (void)fetchLastApplyAndUnreadCountWithCompletion:;
- (id)multicastDelegate;
- (void)processPushedApplyContentDic:type:;
- (void)removeNotifyObserverWithIdentifier:;
- (void)sendNewConversationApplyWithShortID:conversationType:bizExt:completion:;
- (void)setMulticastDelegate:;
- (void)updateConversationAuditSwitchWithShortID:type:switchStatus:completion:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
