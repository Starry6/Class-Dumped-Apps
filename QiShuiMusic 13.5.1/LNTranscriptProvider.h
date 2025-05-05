@interface LNTranscriptProvider : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)queue;
- (void)donateWithActionRecord:reply:;
- (void)donateActionRecordData:writeImmediately:reply:;
- (void)deleteRecordsWithMatchingPredicate:reply:;
- (void)deleteAllRecordsWithReply:;
- (id)transcriptPublisherFromDate:error:;
- (id)transcriptPublisherFromDate:toDate:maxEvents:reversed:error:;
+ (id)xpcInterface;
+ (id)createStreamsWithStreamURL:;
+ (id)publisherForStream:fromDate:toDate:maxEvents:reversed:;
@end
