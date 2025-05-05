@interface IESLiveStreamPlayerLayoutNormal : IESLiveStreamPlayerLayoutBase
- (BOOL)enableUserSelectedExternalScaleTypeWith:;
- (id)getCurrentStreamFrame;
- (long long)getLastScaleType;
- (long long)getScreenshotScaleTypeByRatio;
- (long long)getUserSelectedExternalScaleTypeWith:;
- (BOOL)isCurrentDeviceLandscape;
- (BOOL)isCurrentDevicePortrait;
- (void)layoutWithPreviousType:;
- (BOOL)needGetLastScaleTypeFromPictureFitType;
- (id)oldPlayerFrameHasViceViewWith:;
- (id)playerFrameHasViceViewWith:;
- (id)rawPlayer;
- (BOOL)shouldUseCurrentLayoutType;
- (id)layoutFrame;
@end
