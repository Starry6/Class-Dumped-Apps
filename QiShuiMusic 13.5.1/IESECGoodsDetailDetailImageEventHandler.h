@interface IESECGoodsDetailDetailImageEventHandler : IESECGoodsDetailEventHandler
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)p_presentImagePreviewViewControllerAtIndex:tapHeader:allSourceImages:scaleToFillWidth:scrollToTop:;
- (void)tapImagePreview:business:;
+ (id)eventComponentID;
@end
