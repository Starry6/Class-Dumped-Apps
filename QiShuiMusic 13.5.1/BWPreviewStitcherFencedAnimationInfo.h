@interface BWPreviewStitcherFencedAnimationInfo : BWFencedAnimationInfo
@property (nonatomic) double primaryCaptureAspectRatio;
@property (nonatomic) double primaryCaptureRectCenterX;
@property (nonatomic) NSInteger primaryCaptureRectCenterXPixelOffset;
- (id)description;
- (void)setPrimaryCaptureRectCenterX:;
- (double)primaryCaptureRectCenterX;
- (double)primaryCaptureAspectRatio;
- (void)setPrimaryCaptureAspectRatio:;
- (int)primaryCaptureRectCenterXPixelOffset;
- (void)setPrimaryCaptureRectCenterXPixelOffset:;
+ (id)fencedAnimationInfoWithAspectRatio:centerX:centerXPixelOffset:fencePortSendRight:;
@end
