@interface AMapSearchCloudConfig : NSObject
- (BOOL)shouldLimitWalk;
- (BOOL)shouldLimitRide;
- (id)geoCacheConfig;
- (int)keyWordLenMaxNum;
- (double)limitPassAreaMaxArea;
- (int)limitPassAreaMaxCount;
- (int)limitPassAreaPointCount;
- (int)limitPassPointMaxCount;
- (int)limitPoiPageMaxNum;
- (int)limitPoiPageMaxSize;
- (double)limitRideMaxLength;
- (double)limitTruckMaxLength;
- (double)limitWalkMaxLength;
- (id)placeAroundCacheConfig;
- (id)placeTextCacheConfig;
- (id)regeoCacheConfig;
- (int)regeoCacheCountLimit;
- (double)regeoCacheTimeLimit;
- (void)reloadLastCloudConfig;
- (void)saveLastCloudConfig;
- (BOOL)shouldLimitPassArea;
- (BOOL)shouldLimitPassPoint;
- (BOOL)shouldLimitPoiPage;
- (BOOL)shouldLimitTruck;
- (BOOL)shouldRegeoFormatLatLng;
- (BOOL)shouldRequestCache;
- (void)updateControlWithResponse:;
- (void)updateRequestCloundWithConfig:response:isCache:;
- (id)init;
- (void).cxx_destruct;
- (void)initProperties;
+ (id)sharedInstance;
@end
