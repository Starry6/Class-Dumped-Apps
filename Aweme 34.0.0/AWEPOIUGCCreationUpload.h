@interface AWEPOIUGCCreationUpload : NSObject
@property (nonatomic) AWEPOIUGCCreationService creationService;
- (void)uploadImageWithList:paramModel:;
- (void)uploadVideoWithList:paramModel:index:;
- (void)uploadFailWithAssetId:error:bridgeContext:;
- (id)creationService;
- (void)uploadVideoWithFileURL:assetId:index:list:paramModel:bridgeContext:;
- (void)compressVideo:assetId:bridgeContext:completion:;
- (void)uploadVideoWithFileURL:assetId:index:list:paramModel:videoToken:bridgeContext:;
- (void)uploadVideoSuccessWithAssetId:vid:url:width:height:duration:bridgeContext:;
- (void)compressProgress:assetId:bridgeContext:;
- (void)uploadAssetWithParamModel:completionHandler:;
- (void)setCreationService:;
- (id)init;
- (void).cxx_destruct;
+ (id)videoHostName;
+ (id)sharedManager;
@end
