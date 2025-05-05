@interface SCNMovieExportOperation : _SCNExportOperation
- (void)dealloc;
- (void)main;
- (id)initWithRenderer:size:attributes:outputURL:;
- (void)_setupMovieToWritableFile:;
- (id)_copySnapshot:;
- (void)_finishedExport;
- (void)appendImage:withPresentationTime:usingAdaptor:;
- (void)renderAndAppendWithPresentationTime:usingAdaptor:metalTextureCache:cvQueue:completionBlock:;
@end
