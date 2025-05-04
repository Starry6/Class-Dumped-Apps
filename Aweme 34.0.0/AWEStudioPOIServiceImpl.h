@interface AWEStudioPOIServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPOIPickerWithLocationInfos:splitDomains:isOversea:entrance:moreParams:shouldShowAddStore:completion:cancelBlock:;
- (id)baseTrackerParamsForPOIInfo:enterFrom:;
- (void)fetchRecommendPOIsWithZipURL:recordLocation:needSelfLocation:creationID:;
- (void)cleanAIRecommendPOIs;
- (id)poiTag;
- (void)trackBDUGConsumeWithType:POIInfo:logPassback:;
- (id)createAWEStudioPOIShowPoiPickerMoreParamsModel;
- (void)showPOIPickerWithLocations:splitDomains:isOversea:entrance:moreParams:shouldShowAddStore:completion:cancelBlock:;
- (void)showPOIPickerWithLocations:splitDomains:isOversea:entrance:moreParams:shouldShowAddStore:completion:;
- (id)getPOIEditViewControllerWithModel:;
@end
