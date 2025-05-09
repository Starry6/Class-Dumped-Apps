@interface EDPETInteractionEventLog : NSObject
@property (nonatomic) <EMUserProfileProvider> profileProvider;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) <EMVIPManager> vipManager;
@property (nonatomic) EFLazyCache contactIDCache;
@property (nonatomic) NSString meContactIdentifier;
@property (nonatomic) NSData rotatingSalt;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) AI sequenceNumber;
@property (nonatomic) NSURL directory;
@property (nonatomic) NSURL currentLogFile;
@property (nonatomic) NSFileHandle logFileHandle;
@property (nonatomic) AB shouldLog;
@property (nonatomic) EFMutableInt64Set currentLogMessageIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)directory;
- (BOOL)shouldLog;
- (long long)userID;
- (id)hashedMessageHeadersForMessage:;
- (long long)hashedContactIDForAddress:;
- (void)persistEvent:date:message:data:;
- (int)_eventNameFromString:;
- (void)_rotateLogWithCompressedData:;
- (BOOL)_openCurrentLogfile;
- (void)_resetIdentifiers;
- (id)contactIDCache;
- (id)_eventForName:date:;
- (id)hashedSubject:;
- (void)_writeQuotaReachedEvent;
- (id)workQueue;
- (id)logFileHandle;
- (BOOL)_isLogQuotaReached;
- (long long)hashedMailboxID:;
- (void)waitForPendingWrites;
- (id)vipManager;
- (void)_writeHeader;
- (id)currentLogMessageIDs;
- (id)profileProvider;
- (long long)_truncatedSHA256:;
- (void)setCurrentLogFile:;
- (void)setRotatingSalt:;
- (void)_writeMessageDataIfNecessary:;
- (id)_buildLogFileURLInDir:;
- (void)persistEvent:dataFromMessage:account:;
- (void)persistEvent:dataFromMessage:;
- (void)setLogFileHandle:;
- (id)_framedMessage:;
- (long long)deviceID;
- (id)batchedEventsForSubmission;
- (id)persistentBits;
- (void)setSequenceNumber:;
- (unsigned long long)_estimateStopCount:;
- (unsigned long long)_truncatedUNIXTimestampFromDate:;
- (long long)hashedAccountID:;
- (void)setMeContactIdentifier:;
- (void)_writeEvent:;
- (id)initWithDirectory:userProfileProvider:contactStore:vipManager:;
- (unsigned int)sequenceNumber;
- (void).cxx_destruct;
- (void)persistEvent:date:conversationID:data:;
- (void)persistEvent:date:message:mailboxType:;
- (id)contactStore;
- (id)_currentLocaleIdentifier;
- (long long)hashedString:;
- (id)rotatingSalt;
- (id)_scanForMessageIDs:logVersion:;
- (id)meContactIdentifier;
- (id)currentLogFile;
- (int)_openFileForAppending:;
- (void)persistEvent:date:message:mailbox:;
- (void)setShouldLog:;
- (void)_compressFramedMessagesIntoBatch:;
- (id)_messageDataEventForMessage:account:;
- (int)_timezoneOffset;
- (long long)hashedConversationID:;
- (void)setCurrentLogMessageIDs:;
- (void)_writeMessageDataIfNecessary:account:;
+ (id)log;
+ (void)enumerateFramesInData:block:;
@end
