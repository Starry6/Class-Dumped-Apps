@interface AWEPOILynxContainerView : AWEPOICubeView
@property (nonatomic) AWEPOILynxModel poiLynxModel;
@property (nonatomic) BOOL enableEventThrough;
- (void)setEnableEventThrough:;
- (id)lynxInitialData;
- (id)nativeModuleClasses;
- (double)fontScaleForCubeWithModel:;
- (BOOL)enableEventThrough;
- (id)poiLynxModel;
- (void)setPoiLynxModel:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
