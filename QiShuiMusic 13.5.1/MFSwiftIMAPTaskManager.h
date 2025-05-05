@interface MFSwiftIMAPTaskManager : NSObject
- (void)accountDidChange:;
- (BOOL)deleteMailbox:;
- (BOOL)createMailbox:;
- (BOOL)renameMailbox:toMailbox:;
- (void)fetchNow:;
- (void)fetchNow:withMailboxes:completion:;
- (void)startBackFillingMessageBodyDownloadWithRequest:;
- (void)stopBackFillingMessageBodyDownload;
- (void)checkForNewLocalActions;
- (void)addLocalAction:;
- (void)localMailboxesDidChange;
- (id)fetchSeparatorChar;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (void)test_tearDown;
@end
