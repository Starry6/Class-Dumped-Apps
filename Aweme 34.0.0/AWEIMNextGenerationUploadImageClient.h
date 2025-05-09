@interface AWEIMNextGenerationUploadImageClient : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) AWEIMFakeProgressProvider fakeProgressProvider;
@property (nonatomic) NSInteger fileType;
@property (nonatomic) AWEIMNextGenerationUploadConfigModel config;
@property (nonatomic) BDImageUploaderClient client;
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSError error;
@property (nonatomic) BDUploadImageInfo imageInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imageUploadDidFinish:;
- (void)imageUpload:fileIndex:progressDidUpdate:;
- (void)imageUpload:onLogInfo:;
- (void)imageUpload:fileIndex:singleImage:error:;
- (long long)imageUploadGetNetState:;
- (id)imageConfig;
- (void)uploadWithContext:;
- (id)boeHandledHostName:;
- (id)p_uploadCustomParameterString;
- (id)createImagePreHeatUploaderClient;
- (BOOL)shouldIgnoreVerifyImageForUploadFileType:;
- (void)uploadOriginData:filePath:fileType:progressBlock:completion:;
- (id)createImageUploaderClient;
- (id)fakeProgressProvider;
- (id)createImageUploaderClient_backup;
- (id)originalHostName;
- (id)p_getUploadConfigDic;
- (id)p_setPreHeatConfigWithConfigDict:isUseStorage:;
- (id)p_getAuthDictWithConfig:;
- (void)p_setRequestParameterWithClient:;
- (void)p_tracePicPreHeatResultWith:;
- (id)adjustUploadConfig:;
- (void)setFakeProgressProvider:;
- (id)progressBlock;
- (void)setConfig:;
- (int)fileType;
- (id)initWithConfig:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setError:;
- (void)setClient:;
- (id)config;
- (id)client;
- (void)setProgressBlock:;
- (void)setData:;
- (void)setFileType:;
- (void).cxx_destruct;
- (id)error;
- (id)data;
- (id)imageInfo;
- (void)setImageInfo:;
@end
