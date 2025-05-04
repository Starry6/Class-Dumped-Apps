@interface AWEIMFaceToFaceDefaultConfigManager : NSObject
@property (nonatomic) AWEIMSpringFaceToFaceActivityModel faceToFaceActivityModel;
@property (nonatomic) AWEIMFaceToFaceImageGeckoSetting geckoImageSetting;
- (id)faceToFacePanelKeyboardData;
- (id)faceToFaceViewConfig;
- (void)setupDefaultConfig;
- (void)setFaceToFaceActivityModel:;
- (id)faceToFaceActivityModel;
- (id)geckoImageSetting;
- (void)setGeckoImageSetting:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
