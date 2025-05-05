@interface AWEIMMessageAttachmentDatabaseManager : NSObject
@property (nonatomic) FMDatabase database;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (BOOL)deleteAllFilesWithOptionalTask:;
- (void)didFinishLogout;
- (void)checkDBFillTextInTextView:;
- (BOOL)deleteFileWithFileID:;
- (BOOL)deleteFilesWithConversationID:optionalTask:;
- (BOOL)deleteFilesWithMessageID:optionalTask:;
- (void)didFinishLogin;
- (BOOL)insertFile:optionalTask:;
- (id)p_zeroReferenceFilePathsInCandidates:;
- (BOOL)prepareDatabaseTableAndIndex;
- (id)queryFileWithFileID:;
- (id)queryFilesWithFilePath:;
- (void)syncDispatch:;
- (BOOL)updateFile:optionalTask:;
- (id)init;
- (void)dealloc;
- (void)setDatabase:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)database;
- (id)queue;
+ (id)sharedInstance;
@end
