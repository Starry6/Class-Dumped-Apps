@interface LNTranscriptPrivilegedProvider : LNTranscriptProvider
- (void)donateActionRecordData:bundleIdentifier:timestamp:writeImmediately:reply:;
- (id)transcriptPublisherWithStreamName:fromDate:error:;
- (id)transcriptPublisherWithStreamName:fromDate:toDate:maxEvents:reversed:error:;
+ (id)xpcInterface;
@end
