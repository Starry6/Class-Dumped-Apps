@interface MKLookAroundScene : NSObject
@property (nonatomic) Q type;
@property (nonatomic) GEOCameraFrame cameraFrameOverride;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) GEOMuninViewState muninViewState;
@property (nonatomic) BOOL wantsCloseUpView;
- (unsigned long long)_type;
- (id)_muninViewState;
- (id)initWithMapItem:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_mapItem;
- (id)initWithMapItem:cameraFrameOverride:;
- (id)initWithMuninViewState:;
- (id)_cameraFrameOverride;
- (BOOL)_wantsCloseUpView;
- (void)_setWantsCloseUpView:;
@end
