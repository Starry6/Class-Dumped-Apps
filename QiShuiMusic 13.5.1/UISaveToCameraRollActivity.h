@interface UISaveToCameraRollActivity : UIActivity
@property (nonatomic) q imageCount;
@property (nonatomic) q livePhotoCount;
@property (nonatomic) q videoCount;
@property (nonatomic) _UISaveToCameraRollSaveItemsController saveController;
- (id)activityTitle;
- (id)activityType;
- (long long)imageCount;
- (void).cxx_destruct;
- (id)_activityImage;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (void)prepareWithActivityItems:;
- (void)_prepareWithActivityItems:completion:;
- (BOOL)_canSaveImages;
- (void)setImageCount:;
- (long long)livePhotoCount;
- (void)setLivePhotoCount:;
- (long long)videoCount;
- (void)setVideoCount:;
- (id)saveController;
- (void)setSaveController:;
+ (unsigned long long)_xpcAttributes;
@end
