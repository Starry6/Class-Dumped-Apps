@interface AWEAIGCResourceUploadServiceImpl : NSObject
@property (nonatomic) BDImageXUploaderClient imageUploader;
@property (nonatomic) NSMutableDictionary uploadImages;
@property (nonatomic) NSArray uploadOriginImages;
@property (nonatomic) NSMutableDictionary imageUploadInfo;
@property (nonatomic) @? uploadCompletion;
@property (nonatomic) BOOL hasUploadError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imageXUpload:fileIndex:singleImage:error:;
- (void)imageXUpload:fileIndex:progressDidUpdate:;
- (void)imageXUploadDidFinish:;
- (void)setImageUploader:;
- (id)imageUploader;
- (id)uploadImageDownsampleWithImagePaths:;
- (void)setHasUploadError:;
- (void)setUploadImages:;
- (id)uploadImages;
- (void)setUploadOriginImages:;
- (void)setImageUploadInfo:;
- (void)setUploadCompletion:;
- (id)uploadCustomParameterString;
- (id)uploadOriginImages;
- (id)imageUploadInfo;
- (id)uploadCompletion;
- (void)startUploadImages:extra:authParameters:result:;
- (void)aigcStartUploadImages:extra:authParameters:result:;
- (void).cxx_destruct;
- (void)cancelTask;
- (BOOL)hasUploadError;
@end
