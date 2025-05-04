@interface AWESearchResultLifeServiceGlobalInfoModel : AWEBaseApiModel
@property (nonatomic) NSString strHotelPOIResultItemEmptyToastText;
@property (nonatomic) NSString strTargetPOIID;
@property (nonatomic) NSNumber shouldClearCachedCityInfo;
@property (nonatomic) NSString strUpdatedCityCode;
- (void)setStrHotelPOIResultItemEmptyToastText:;
- (void)setShouldClearCachedCityInfo:;
- (void)setStrUpdatedCityCode:;
- (id)strTargetPOIID;
- (void)setStrTargetPOIID:;
- (id)strHotelPOIResultItemEmptyToastText;
- (id)shouldClearCachedCityInfo;
- (id)strUpdatedCityCode;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
