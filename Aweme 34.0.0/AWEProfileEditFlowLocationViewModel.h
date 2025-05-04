@interface AWEProfileEditFlowLocationViewModel : AWEProfileEditFlowStepViewModel
@property (nonatomic) BOOL hasFetchedLocation;
@property (nonatomic) AWEProfileEditFlowLocationSelectResult selectedLocation;
@property (nonatomic) AWELocationServicePersistModel currentLocation;
@property (nonatomic) BOOL selectCurrentLocation;
- (void)p_requestLocationPermission;
- (BOOL)hasLocationPermission;
- (id)trackFlowType;
- (Class)stepViewClass;
- (BOOL)hasFetchedLocation;
- (void)fetchCurrentLocation;
- (void)setSelectCurrentLocation:;
- (void)p_fetchCurrentLocation;
- (void)setHasFetchedLocation:;
- (id)currentLocation;
- (id)impressionEvent;
- (void)setCurrentLocation:;
- (void)finishWithCompletion:;
- (void).cxx_destruct;
- (BOOL)selectCurrentLocation;
- (id)selectedLocation;
- (void)setSelectedLocation:;
@end
