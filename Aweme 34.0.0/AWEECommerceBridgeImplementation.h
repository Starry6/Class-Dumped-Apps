@interface AWEECommerceBridgeImplementation : NSObject
+ (void)openTaobaoURL:completion:;
+ (void)openPostPannelWithParams:completion:;
+ (void)publishEventPostCommentResponseWithParams:;
+ (void)openVideoEditVCWithParams:completion:;
+ (id)sendAdLogV1WithParams:;
+ (void)openTaobaoGoodsWithParams:completion:;
+ (id)updateGoodsInfoWithParams:;
+ (id)addGoodsDraftWithParams:;
+ (id)didAddGoodsWithParams:;
+ (void)jumpToTaobaoForBindTaobaoKe:context:completion:;
+ (void)openTaoBaoRelationPageWithParams:completion:;
+ (void)checkLegalDisclaimer:completion:;
+ (void)payWithParams:completion:;
+ (void)ttpayWithParams:completion:;
+ (void)launchWXMiniProWithParams:completion:;
+ (void)galleryWithParams:completion:;
+ (void)downloadMediaAndOpenPostPannelWithParams:completion:;
+ (void)downloadMediaAndOpenVideoEditVCWithParams:completion:;
+ (void)getCjInfoWithParams:completion:;
+ (void)chooseMediaWithParams:completion:;
+ (void)uploadFileWithParams:completion:;
@end
