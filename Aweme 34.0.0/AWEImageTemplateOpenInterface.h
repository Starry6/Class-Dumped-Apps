@interface AWEImageTemplateOpenInterface : NSObject
+ (void)predownloadTemplateResourcesWithTemplateID:enterFrom:completion:;
+ (void)applyTemplateToImageWithOriginImagePath:templateID:resourcesDIYInfos:enterFrom:completion:;
+ (void)exportTemplateRenderImageWithOriginImagePath:templateID:ZIPFile:downloadedMediaResourcesCache:resourcesDIYInfos:downloadResourcesErrorType:completion:;
+ (void)mediaResourcesDownloadWith:completion:;
+ (void)mediaResourcesDownloadWithTemplateID:completion:;
+ (id)transferToNLEResourcesFrom:;
+ (BOOL)ifSuccessfullyApplyTemplateInfoInFile:toNLEWrapper:withTemplateID:;
+ (id)getContraintSizeWithImageSize:;
+ (void)updateDIYTemplateInfoForNLEImageWrapper:DIYInfos:;
+ (void)updateTextLayerInfoWith:NLELayers:;
+ (id)getNLEResourceFrom:;
+ (void)applyTemplateToImageWithOriginImagePath:resourcesModel:resourcesDIYInfos:enterFrom:completion:;
+ (void)predownloadTemplateResourcesWith:enterFrom:completion:;
+ (id)errorWithDescription:;
@end
