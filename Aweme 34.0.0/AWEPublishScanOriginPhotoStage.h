@interface AWEPublishScanOriginPhotoStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel model;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParams;
@property (nonatomic) AWEBDUploadClientService BDUploadService;
@property (nonatomic) BOOL hasError;
@property (nonatomic) NSString uploadedImageId;
@property (nonatomic) NSString filePath;
@property (nonatomic) Q begainaddPictureInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imageUploadDidFinish:;
- (void)imageUpload:fileIndex:progressDidUpdate:;
- (void)imageUpload:onLogInfo:;
- (void)imageUpload:fileIndex:singleImage:error:;
- (long long)imageUploadGetNetState:;
- (id)uploadParams;
- (void)setUploadParams:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)updateUploadParams:;
- (void)setBegainaddPictureInterval:;
- (void)p_configAndStartBDUploadClient:;
- (id)BDUploadService;
- (void)setBDUploadService:;
- (void)setUploadedImageId:;
- (unsigned long long)begainaddPictureInterval;
- (id)materialIdFromUploadedImageIds;
- (id)uploadedImageId;
- (void)setModel:;
- (id)filePath;
- (void)run;
- (id)initWithModel:;
- (BOOL)hasError;
- (id)model;
- (void)setFilePath:;
- (void).cxx_destruct;
- (void)setHasError:;
@end
