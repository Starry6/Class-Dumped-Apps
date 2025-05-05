@interface IESECSKUBuyNowTask : IESECSKUBaseTask
- (void)confirmWithSuccess:couponID:;
- (id)runTask;
+ (BOOL)goToOrderPageWithURL:comboID:comboNum:installmentCount:couponID:poiID:logData:sourceBTMToken:;
@end
