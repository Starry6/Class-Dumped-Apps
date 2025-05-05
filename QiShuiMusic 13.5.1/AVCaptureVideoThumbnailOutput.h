@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput
@property (nonatomic) <AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate;
@property (nonatomic) NSArray filters;
@property (nonatomic) {CGSize=dd} thumbnailSize;
- (id)filters;
- (BOOL)canAddConnection:failureReason:;
- (id)init;
- (void)dealloc;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:;
- (void)attachSafelyToFigCaptureSession:;
- (id)thumbnailSize;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:;
- (void)_handleNotification:payload:;
- (void)setFilters:;
- (void)setThumbnailContentsDelegate:;
- (void)setThumbnailSize:;
- (void)_signalInvalidationOfPropagatedContentsIfNecessary;
- (id)thumbnailContentsDelegate;
+ (id)contentsRectForFilterAtIndex:thumbnailSize:filterCount:;
@end
