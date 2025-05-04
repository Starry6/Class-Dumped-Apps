@interface AWEVisionFeatureComponent : NSObject
@property (nonatomic) AWEVisionCameraViewController myVisionCameraVC;
@property (nonatomic) AWEVisionCameraGlobalDataModel globalDataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (id)globalDataModel;
- (void)switchModeViewWillChangeToMode:oldMode:;
- (void)setMyVisionCameraVC:;
- (void)setGlobalDataModel:;
- (id)myVisionCameraVC;
- (void).cxx_destruct;
@end
