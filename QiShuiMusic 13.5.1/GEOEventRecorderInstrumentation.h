@interface GEOEventRecorderInstrumentation : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)getRecordedFilePaths;
- (void)_setupLogging;
- (void)captureUIEvent:;
- (void)captureUserActionLogMessageEvent:;
- (void)writeString:ToFilepath:;
- (void)captureEventRecorderScreenVideo;
- (void)_captureScreenVideo:;
- (void)initializeFilepaths;
+ (id)initializeDefaultInstrumentation;
+ (id)defaultInstrumentation;
+ (void)endInstrumentation;
@end
