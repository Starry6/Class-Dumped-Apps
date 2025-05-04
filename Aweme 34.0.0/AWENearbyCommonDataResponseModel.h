@interface AWENearbyCommonDataResponseModel : AWEBaseApiModel
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString activityDescription;
@property (nonatomic) AWECityModel currentLocatedCity;
@property (nonatomic) AWECityModel currentCityGrouponTab;
@property (nonatomic) AWECityModel currentCityGrouponPage;
- (id)currentLocatedCity;
- (id)currentCityGrouponTab;
- (void)setCurrentLocatedCity:;
- (void)setCurrentCityGrouponTab:;
- (id)currentCityGrouponPage;
- (void)setCurrentCityGrouponPage:;
- (void)setActivityDescription:;
- (id)activityDescription;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
