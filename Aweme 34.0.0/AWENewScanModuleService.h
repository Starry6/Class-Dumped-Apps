@interface AWENewScanModuleService : HTSService
- (id)gradualChangColor:startColorString:endColorString:;
- (void)fetchQRCodeImageWithType:itemID:editionID:completion:;
- (void)fetchQRCodeImageWithType:itemID:extraInfo:useRebrandStyle:completion:;
- (void)fetchQRCodeImageWithType:itemID:extraInfo:reqExtraInfo:useRebrandStyle:completion:;
- (void)fetchQRCodeImageWithType:itemID:extraInfo:useRebrandStyle:activityInfo:shareScene:completion:;
- (void)fetchAIGCQRCodeListWithCompletion:;
- (void)presentScanViewControllerWithCameraOnly:closeOnComplete:handler:;
- (void)presentScanViewControllerWithCameraOnly:closeOnComplete:enableAnalysis:handler:;
- (id)scanViewControllerWithHandler:;
- (void)ironManStartScanWithCompletion:;
- (id)mapQRCodeDeepLink:;
- (void)urlStringFromQRCodeImage:completion:;
- (void)readActivityQRCodeInfoWithVideo:completion:;
- (void)handleScanResult:trackParams:urlProcessBlock:completion:;
- (void)handleScanConvertResult:trackParams:enableAnalysis:completion:;
- (id)qrCodeColorTemplate:avatarImage:;
- (id)init;
- (void).cxx_destruct;
+ (void)bindMyQRRouter;
@end
