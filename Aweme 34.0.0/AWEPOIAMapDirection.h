@interface AWEPOIAMapDirection : NSObject
@property (nonatomic) q mapLoadingStatus;
@property (nonatomic) NSArray lastResults;
@property (nonatomic) NSString cityCode;
- (long long)mapLoadingStatus;
- (void)setMapLoadingStatus:;
- (void)requestWalkingDirectionFromLocation:toLocation:completion:;
- (void)requestDrivingDirectionLocation:toLocation:completion:;
- (void)requestBicycleDirectionLocation:toLocation:completion:;
- (void)requestTransitDirectionLocation:toLocation:completion:;
- (id)walkURLPath;
- (id)amapAPIKey;
- (id)poiDirectionItemWithAmapModel:;
- (id)drivingURLPath;
- (id)bicycleURLPath;
- (id)transitURLPath;
- (id)poiDirectionItemWithTransitModel:;
- (id)p_mergeOverlaysWith:;
- (void)setupRoutesFromLocation:toLocation:tranportTypes:completion:;
- (void)setLastResults:;
- (void).cxx_destruct;
- (id)lastResults;
- (id)baseURL;
- (id)cityCode;
- (void)setCityCode:;
@end
