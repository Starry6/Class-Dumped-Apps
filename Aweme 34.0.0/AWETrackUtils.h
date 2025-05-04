@interface AWETrackUtils : NSObject
+ (void)startTimingPublishPreviewPageInitTimeCost;
+ (void)endTimingPublishPreviewPageInitTimeCostWithEnterFrom:;
+ (void)endTimingSaveToAlbumTimeCostWithEnterFrom:;
+ (void)startTimingSaveDraftTimeCost;
+ (void)endTimingSaveDraftTimeCostWithEnterFrom:;
+ (void)startTimingCaptureFrameTimeCost;
+ (void)endTimingCaptureFrameTimeCostWithIsSourceImage:;
+ (void)trackCaptureFrameResult:isSourceImage:;
+ (void)startTimingSaveToAlbumTimeCost;
+ (BOOL)enableEditorOptimizeTrack;
@end
