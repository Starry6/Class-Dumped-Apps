@interface AWEPOIUGCCreationAsset : NSObject
+ (id)checkParamValid:;
+ (id)transInstancesToPHAssets:bridgeContext:;
+ (id)getScreenShotImageFromVideoPath:;
+ (BOOL)saveImage:toFilePath:;
+ (id)getCertWithBridgeContext:;
+ (id)getPHAssetWithAssetID:bpeaCert:;
+ (id)getPHAssetWithAssetsID:bpeaCert:;
+ (void)openCreationAssetPageWithParamModel:completionHandler:;
+ (id)getCurrentLocation;
@end
