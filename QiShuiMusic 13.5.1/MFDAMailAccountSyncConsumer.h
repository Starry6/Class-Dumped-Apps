@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer
@property (nonatomic) NSString tag;
@property (nonatomic) <DAMailboxStreamingContentConsumer> streamConsumer;
@property (nonatomic) BOOL moreAvailable;
- (id)tag;
- (void)setTag:;
- (void).cxx_destruct;
- (void)reset;
- (void)accountHierarchyChanged:;
- (void)taskFailed:statusCode:error:;
- (void)resultsForMailbox:newTag:actions:responses:percentComplete:moreAvailable:sentBytesCount:receivedBytesCount:;
- (BOOL)shouldBeginStreamingForMailMessage:format:;
- (void)consumeData:length:format:mailMessage:;
- (void)didEndStreamingForMailMessage:;
- (id)initWithCurrentTag:accountID:requests:;
- (id)originalThreadMonitor;
- (id)actionsConsumer;
- (void)handleSyncResponses:;
- (void)partialResultsForMailbox:actions:responses:percentComplete:moreAvailable:;
- (BOOL)refreshFolderHierarchyAndWait:;
- (id)streamConsumer;
- (void)setStreamConsumer:;
- (BOOL)moreAvailable;
@end
