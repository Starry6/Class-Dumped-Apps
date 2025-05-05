@interface IESECShopMonitorService : IESECShopService
@property (nonatomic) IESECServiceProxy<IESECShopForwardCoService> forwardCoService;
@property (nonatomic) IESECQualityInfoV2 qualityInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)traceFirstPaint;
- (id)forwardCoService;
- (double)getPageInitStartTime;
- (void)initMonitorService;
- (id)qualityInfo;
- (void)setForwardCoService:;
- (void)tracePageInitEnd;
- (void)tracePageInitStart;
- (void)traceRenderInfoEnd;
- (void)traceRenderInfoStart;
- (void)traceRenderStart;
- (void)traceReqStart;
- (void)traceRouteStart:;
- (void).cxx_destruct;
@end
