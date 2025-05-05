@interface IESECPerformanceMonitor : NSObject
@property (nonatomic) NSMutableDictionary renderTimeMultiDic;
@property (nonatomic) NSMutableDictionary orderSubmitTimeDic;
@property (nonatomic) NSString fromSkuPanel;
- (void)addCJPayPerformanceTrackerWithPoint:;
- (void)addOrderSubmitPoint:;
- (void)addOrderSubmitPointDic:;
- (void)addRenderPerformancePointDic:isClear:;
- (void)addRenderPerformancePointWithPoint:;
- (void)buyNowClick;
- (id)fromSkuPanel;
- (id)getCurFromSkuPanel;
- (id)getRenderSchemaWithSchema:;
- (id)getRenderTimeDic;
- (void)orderSubmitClick;
- (id)orderSubmitTimeDic;
- (id)renderTimeMultiDic;
- (void)reportEnterSubmitOrdersWithSchema:;
- (void)setCurFromSkuPanel:;
- (void)setFromSkuPanel:;
- (void)setOrderSubmitTimeDic:;
- (void)setRenderTimeMultiDic:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
