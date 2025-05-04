@interface AWEGoodsOpenPage : NSObject
+ (void)openGoodsGuideOnViewcontroller:entryPage:completionBlock:;
+ (BOOL)openThirdPlatformWithoutGoodsDetailForUrl:promotionSource:;
+ (void)openMyOrdersWithOriginType:enterFrom:;
+ (void)openTaobaoWithWebURLString:onViewController:completion:;
+ (void)openNewShopInstrumentBoxWithParameters:;
+ (void)openAddGoodsPageWithParameters:;
+ (id)goodsPageWithParameters:;
+ (void)openMyOrdersWithOriginType:enterFrom:withParams:orderURL:;
+ (void)openMyOrdersWithOriginType:enterFrom:orderURL:;
+ (id)VCForOpenGoodsPurposeWithRefVC:;
+ (void)fallbackToWebViewWithURLString:inViewController:becauseOfError:completion:;
+ (void)openMyOrdersWithOriginType:enterFrom:withParams:;
+ (void)openPageWithAwemeSettingsKey:defaultURLString:additionalPageParameters:;
+ (id)pageWithAwemeSettingsKey:defaultURLString:additionalPageParameters:;
+ (void)openPageWithURLString:fromViewController:additionalPageParameters:;
+ (id)handleURLString:additionalPageParameters:;
+ (id)pageWithURLString:fromViewController:additionalPageParameters:;
+ (void)openGoodsReportPageWithParams:;
+ (id)awemeCache;
+ (void)openShopReputationDetailPageWithSecAuthorId:enterSource:followStatus:authorId:;
@end
