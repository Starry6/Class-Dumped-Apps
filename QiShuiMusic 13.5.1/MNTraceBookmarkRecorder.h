@interface MNTraceBookmarkRecorder : NSObject
- (void).cxx_destruct;
- (id)initWithTrace:;
- (void)recordBookmarkAtTime:withScreenshotData:completionHandler:;
@end
