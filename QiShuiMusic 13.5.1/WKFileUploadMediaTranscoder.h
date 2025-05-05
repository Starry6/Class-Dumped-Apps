@interface WKFileUploadMediaTranscoder : NSObject
- (void)start;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_updateProgress:;
- (id)initWithItems:videoCount:completionHandler:;
- (void)_processItemAtIndex:;
- (void)_finishedProcessing;
- (void)_dismissProgress;
- (id)_temporaryDirectoryCreateIfNecessary;
@end
