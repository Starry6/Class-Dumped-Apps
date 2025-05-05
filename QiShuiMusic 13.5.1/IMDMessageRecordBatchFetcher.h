@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher
@property (nonatomic) NSString associatedChatGUID;
- (void).cxx_destruct;
- (id)initWithAssociatedChatGUID:;
- (id)nextBatchWithSize:;
- (id)associatedChatGUID;
@end
