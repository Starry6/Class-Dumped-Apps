@interface MFIMAPCommandPipeline : NSObject
- (BOOL)isFull;
- (BOOL)isSending;
- (void).cxx_destruct;
- (unsigned long long)chunkSize;
- (void)setChunkSize:;
- (void)addFetchCommandForUid:fetchItem:expectedLength:bodyDataConsumer:consumerSection:;
- (unsigned long long)expectedSize;
- (void)setFull:;
- (void)_removeFetchUnitMatchingResponse:;
- (id)failureResponsesFromSendingCommandsWithConnection:;
@end
