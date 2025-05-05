@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline
@property (nonatomic) BOOL imageQueueUpdatedNotificationSent;
@property (nonatomic) BOOL previewRunning;
@property (nonatomic) BOOL previewSinkEnabled;
@property (nonatomic) NSString sourceID;
- (void)setSourceID:;
- (void)dealloc;
- (id)sourceID;
- (void)setPreviewSinkEnabled:;
- (void)setPreviewRunning:;
- (BOOL)imageQueueUpdatedNotificationSent;
- (BOOL)previewSinkEnabled;
- (void)setImageQueueUpdatedNotificationSent:;
- (BOOL)previewRunning;
@end
