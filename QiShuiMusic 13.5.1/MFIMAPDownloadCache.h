@interface MFIMAPDownloadCache : NSObject
- (void).cxx_destruct;
- (id)downloadForMessage:;
- (id)downloadForUid:section:length:consumer:;
- (id)downloadForUid:section:expectedLength:consumer:;
- (id)downloadForUid:section:range:consumer:;
- (void)handleFetchResponse:forUid:;
- (void)handleFetchResponses:;
- (void)processResultsForUid:;
- (void)cleanUpDownloadsForUid:;
- (void)addCommandsForDownload:toPipeline:;
@end
