@interface IESSaaSTIMSingleStrategyPuller : NSObject
@property (nonatomic) q userID;
@property (nonatomic) NSInteger inbox;
@property (nonatomic) <IESSaaSTIMMessageStoreProtocol> db;
@property (nonatomic) <IESSaaSTIMKVStorageProtocol> kvStorage;
@property (nonatomic) NSString logMarkerForInit;
@property (nonatomic) BOOL fullInitFinished;
@property (nonatomic) Q pullerInitStatus;
@property (nonatomic) NSString pullerInitStatusKey;
@property (nonatomic) NSString kvCmdMessageIndexKey;
@property (nonatomic) NSString kvConversationVersionKey;
@property (nonatomic) BOOL cursorInited;
@property (nonatomic) BOOL hasInitSuccess;
@property (nonatomic) <IESSaaSTIMPullerStatusChangeObserverDelegate> notifier;
@property (nonatomic) IESSaaSTIMInboxPullerGroup group;
@property (nonatomic) q hasFetchedConvCounts;
@property (nonatomic) NSString kvCursorInitedKey;
@property (nonatomic) NSString kvLocationCursorKey;
@property (nonatomic) double pullStartTime;
@property (nonatomic) Q retryCount;
@property (nonatomic) q cmdMessageIndex;
@property (nonatomic) q conversationVersion;
- (long long)cmdMessageIndex;
- (void)resetInitPuller;
- (void)continueFetchPullIfNeedWithcompletion:;
- (long long)conversationVersion;
- (BOOL)cursorInited;
- (void)endInitWithLogID:;
- (void)fetchInitListWithNextCursor:;
- (void)fetchInitListWithNextVersion:;
- (void)finishInitWithError:;
- (BOOL)fullInitFinished;
- (long long)hasFetchedConvCounts;
- (BOOL)hasInitSuccess;
- (id)initWithInbox:userID:;
- (id)kvCmdMessageIndexKey;
- (id)kvConversationVersionKey;
- (id)kvCursorInitedKey;
- (id)kvLocationCursorKey;
- (id)kvStorage;
- (id)logMarkerForInit;
- (void)notifyConversationHasNewMessage:;
- (void)pollingPull:;
- (double)pullStartTime;
- (unsigned long long)pullerInitStatus;
- (id)pullerInitStatusKey;
- (long long)readCmdMessageIndex;
- (long long)readConversationVersion;
- (void)setCmdMessageIndex:;
- (void)setConversationVersion:;
- (void)setCursorInited:;
- (void)setFullInitFinished:;
- (void)setHasFetchedConvCounts:;
- (void)setKvCmdMessageIndexKey:;
- (void)setKvConversationVersionKey:;
- (void)setKvCursorInitedKey:;
- (void)setKvLocationCursorKey:;
- (void)setKvStorage:;
- (void)setLogMarkerForInit:;
- (void)setNeedsPullWithReason:;
- (void)setPullStartTime:;
- (void)setPullerInitStatus:;
- (void)setPullerInitStatusKey:;
- (void)setupKeys;
- (void)startInit;
- (void)updatePullerCursor:;
- (void)writeCmdMessageIndex;
- (void)writeConversationVersion;
- (id)db;
- (long long)userID;
- (void)kickoff;
- (id)notifier;
- (void)setRetryCount:;
- (void)setNotifier:;
- (void)setGroup:;
- (id)group;
- (unsigned long long)retryCount;
- (void).cxx_destruct;
- (void)setDb:;
- (void)setUserID:;
- (int)inbox;
- (void)setInbox:;
+ (id)conversationVersionKeyForInbox:;
+ (id)cmdMessageIndexKeyForInbox:;
+ (BOOL)hasFinishInitAllConversations:;
@end
