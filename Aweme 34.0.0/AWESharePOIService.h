@interface AWESharePOIService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showPanelWithPOI:previousPage:onViewController:;
- (void)showPanelWithCouponPOI:previousPage:onViewController:;
- (void)showPanelWithPOIRank:previousPage:onViewController:;
- (id)sharePOI:extraLogInfo:withType:;
- (id)contextWithPOI:;
- (id)statsSharePOIStage;
- (id)prepareSharePOIModelStage;
- (id)contextWithCouponPOI:;
- (id)statsShareCouponStage;
- (id)contextWithPOIRank:;
- (id)taskWithPOI:;
- (void)additionalConfigForPOIWithModel:context:;
@end
