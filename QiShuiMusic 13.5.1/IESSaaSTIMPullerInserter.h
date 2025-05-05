@interface IESSaaSTIMPullerInserter : NSObject
@property (nonatomic) NSMutableDictionary doNotInsertIndexBeforeThis;
@property (nonatomic) <IESSaaSTIMMessageStoreProtocol> db;
@property (nonatomic) <IESSaaSTIMCurrentUserCredentialProtocol> user;
- (id)doNotInsertIndexBeforeThis;
- (void)handleAyncSendMessageSuccessResponse:;
- (void)handleCommandMessage:inInbox:;
- (void)handleMinIndexMessage:;
- (void)handleRealCommandMessage:;
- (long long)insertMessages:conversationExtraMap:inInbox:reason:;
- (long long)insertMessagesBatch:conversationExtraMap:inInbox:reason:;
- (BOOL)isCommandMessage:;
- (void)setDoNotInsertIndexBeforeThis:;
- (void)userDidLogout:;
- (void)setUser:;
- (id)db;
- (id)init;
- (void)dealloc;
- (id)user;
- (void).cxx_destruct;
- (void)setDb:;
- (BOOL)validateMessage:;
+ (id)appProcessor;
+ (id)sharedInstance;
@end
