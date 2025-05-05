@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController
@property (nonatomic) CLLocation location;
@property (nonatomic) BOOL resizableViewsDisabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_canShowWhileLocked;
- (id)location;
- (long long)preferredUserInterfaceStyle;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)_updateMap;
- (void)_handleTapOnMap;
- (id)visibleMapItems;
- (BOOL)resizableViewsDisabled;
- (void)setResizableViewsDisabled:;
- (void)fetchPoisForBrand;
- (id)geoCamera;
+ (id)inlineMapWithMapItem:options:;
@end
