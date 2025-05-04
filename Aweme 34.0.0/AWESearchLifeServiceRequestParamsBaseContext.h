@interface AWESearchLifeServiceRequestParamsBaseContext : AWESearchVerticalRequestParamsBaseContext
@property (nonatomic) BOOL isLifeService;
@property (nonatomic) NSString strSearchChannel;
@property (nonatomic) NSDictionary dictSortParamsInfo;
@property (nonatomic) BOOL shouldForceDisablePredict;
@property (nonatomic) NSString strTargetPOIID;
@property (nonatomic) BOOL reserveDeliveryFilter;
@property (nonatomic) NSString strCityCode;
- (void)updateWithRouterModel:;
- (void)updateWithExtraLogParams:;
- (id)strCityCode;
- (void)setStrCityCode:;
- (BOOL)isLifeService;
- (void)setIsLifeService:;
- (BOOL)shouldForceDisablePredict;
- (void)setShouldForceDisablePredict:;
- (id)strTargetPOIID;
- (void)setStrTargetPOIID:;
- (BOOL)reserveDeliveryFilter;
- (void)setReserveDeliveryFilter:;
- (void)setDictSortParamsInfo:;
- (id)strSearchChannel;
- (BOOL)isForceInGrouponTab;
- (void)setStrSearchChannel:;
- (BOOL)p_isFromLifeService;
- (BOOL)p_isFromLifeMall;
- (id)dictSortParamsInfo;
- (void).cxx_destruct;
@end
