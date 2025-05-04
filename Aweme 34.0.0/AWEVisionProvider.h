@interface AWEVisionProvider : NSObject
@property (nonatomic) AWEVisionCameraViewController lastCameraViewController;
- (id)lastCameraViewController;
- (void)setLastCameraViewController:;
- (void).cxx_destruct;
+ (id)getScanPictureGraphConfigJson;
+ (id)getScanCameraGraphConfigJsonNeedDetect:;
+ (id)shareInstance;
@end
