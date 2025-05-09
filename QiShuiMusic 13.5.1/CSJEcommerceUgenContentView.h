@interface CSJEcommerceUgenContentView : CSJUgenContentView
@property (nonatomic) NSMutableSet slideEcommerec;
@property (nonatomic) BOOL isClickContentTracked;
@property (nonatomic) UIViewController currentParentViewController;
@property (nonatomic) CSJGuideLottieView guideLottieView;
@property (nonatomic) UIButton slientButton;
- (void)setCurrentParentViewController:;
- (id)guideLottieView;
- (id)currentParentViewController;
- (BOOL)isClickContentTracked;
- (void)override_changeVideoStateWithParams:;
- (void)override_didScrollWithEvent:extraDic:adExtraDataDic:;
- (void)override_dismissWithEvent:extraDic:adExtraDataDic:;
- (void)override_exposureWithEvent:extraDic:adExtraDataDic:;
- (void)override_jumpWithEvent:extraDic:adExtraDataDic:;
- (void)override_loadFinishWithContentView:extraDic:adExtraDataDic:;
- (void)override_recylerLayoutWidget:didEndDisplayWidget:forItemAtIndexPath:;
- (void)override_recylerLayoutWidget:scrollViewDidEndDecelerating:;
- (void)override_recylerLayoutWidget:scrollViewDidEndDragging:willDecelerate:;
- (void)override_reportClickInfoWithEvent:cardMaterial:extraDic:adExtraDataDic:;
- (void)pbu_guideLottieviewAction;
- (void)pbu_slientButtonAction;
- (void)pbu_trackEventEcommerecClickContentWithEvent:;
- (void)pbu_trackEventEcommerecIsSlideWithMaterial:;
- (void)pbu_trackEventShowWithMaterial:extraDic:adExtraDataDic:;
- (void)pbu_ugenAggregationGuidePageRender;
- (void)pbu_ugenAggregationSlientButtonRender;
- (void)setGuideLottieView:;
- (void)setIsClickContentTracked:;
- (void)setSlideEcommerec:;
- (void)setSlientButton:;
- (id)slideEcommerec;
- (id)slientButton;
- (id)subTemplateIdWithDataInfo:;
- (void).cxx_destruct;
@end
