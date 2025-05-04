@interface AWEECEcUploadMultiFileWithProgressMethodImpl : AWEECEcUploadMultiFileWithProgressMethod
@property (nonatomic) AWEECUploadFileHelper preheatHelper;
@property (nonatomic) BOOL usePreHeat;
- (void)callWithParamModel:completionHandler:;
- (void)callWithParamModel:;
- (void)startPreHeatWithParams:;
- (void)uploadPhotosWithParams:imagesArray:;
- (void)uploadVideoWithParams:videoPath:musicID:source:;
- (void)setPreheatHelper:;
- (id)preheatHelper;
- (id)enableMultiUploader;
- (id)compressWithImage:;
- (void)setUsePreHeat:;
- (void)trackImageUploadResult:fileCount:fileDataLength:;
- (BOOL)usePreHeat;
- (id)compressImageThreshold;
- (void).cxx_destruct;
@end
