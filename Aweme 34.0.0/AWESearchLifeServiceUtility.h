@interface AWESearchLifeServiceUtility : NSObject
+ (BOOL)isLifeMallScenesForEnterFrom:from:;
+ (BOOL)isLifeServiceBlockedFrom:;
+ (BOOL)isNearbyLifeMallChannelForEnterFrom:;
+ (BOOL)isProductPageForEnterFrom:;
+ (id)getPOICityStringWithSchemaModel:;
+ (BOOL)shouldShowTabbarInLifeServiceSearch;
+ (id)fetchLifeServiceSearchTabConfig;
+ (unsigned long long)tabBarLandingStrategy;
+ (void)fetchLifeServiceTabModelsWithParams:completion:;
+ (void)fetchLifeServiceTabLandingStrategyWithParams:completion:;
+ (id)getLifeServiceLynxExtraParamsWithSchemaModel:;
+ (void)setupLifeServiceLogData:withSchemaModel:;
+ (id)lifeParamsFromSchemaModel:;
+ (BOOL)isFromLifeHotelChannelSearchWithSchemaModel:;
+ (BOOL)isEmptyQuerySearchWithSchemaModel:;
+ (id)fetchLifeChannelValueFromSchemaModel:;
+ (id)fetchSaleChannelWithSchemaModel:;
+ (BOOL)shouldForceDisplayLightModeUIWithEnterFrom:;
+ (BOOL)shouldLife7PageRestoreLeftBackButtonEnabled;
+ (BOOL)shouldPassLifeSearchRealtimeUserActions;
+ (id)getLifeSearchRealtimeUserActions;
+ (BOOL)shouldLifeSearch7PageManualPreRequestEnabled;
+ (BOOL)showLifeNewLargeFontStyle;
@end
