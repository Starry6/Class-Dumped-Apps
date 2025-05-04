@interface AWELivePhotoImageXUploadRequest : NSObject
@property (nonatomic) NSData imageData;
@property (nonatomic) <IESLivePhotoImageXUploadRequestParams> params;
@property (nonatomic) @? responseHandler;
@property (nonatomic) BDImageXUploaderClient uploaderClient;
@property (nonatomic) HTSLiveApi getURLApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imageXUpload:fileIndex:singleImage:error:;
- (void)imageXUploadDidFinish:;
- (id)uploaderClient;
- (void)setUploaderClient:;
- (id)initWithImageData:params:responseHandler:;
- (void)configUploaderClient;
- (void)errorCallBackWithError:;
- (void)setGetURLApi:;
- (id)getURLApi;
- (id)imageData;
- (void)setImageData:;
- (void)setResponseHandler:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)responseHandler;
- (id)params;
- (void)setParams:;
+ (id)requestWithImageData:params:responseHandler:;
@end
