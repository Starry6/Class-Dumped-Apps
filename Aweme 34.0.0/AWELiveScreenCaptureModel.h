@interface AWELiveScreenCaptureModel : NSObject
@property (nonatomic) UIImage screenshot;
@property (nonatomic) NSURL localScreenshotURL;
@property (nonatomic) UIImage recordVideoCover;
@property (nonatomic) NSURL recordVideoURL;
- (id)localScreenshotURL;
- (void)setLocalScreenshotURL:;
- (id)recordVideoCover;
- (void)setRecordVideoCover:;
- (id)recordVideoURL;
- (void)setRecordVideoURL:;
- (void).cxx_destruct;
- (id)screenshot;
- (void)setScreenshot:;
@end
