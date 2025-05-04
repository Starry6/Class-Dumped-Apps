@interface AWETeenPureModePageTrackHelper : NSObject
+ (id)transferExitMethodToString:;
+ (void)trackPinchZoomExitWithAweme:enterFrom:duration:exitMethod:;
+ (id)tansferZoomTypeToString:;
+ (void)trackChangeSpeedModeWithAweme:enterFrom:speedValue:;
+ (void)trackPinchZoomWithAweme:enterFrom:duration:zoomType:;
@end
