@interface AWELiveImageUploadServiceImpl : NSObject
@property (nonatomic) BDImageXUploaderClient imageUploadClient;
@property (nonatomic) NSMutableDictionary uploadResult;
@property (nonatomic) @? onCompletion;
@property (nonatomic) @? singleImageCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imageXUpload:fileIndex:singleImage:error:;
- (void)imageXUpload:fileIndex:progressDidUpdate:;
- (void)imageXUploadDidFinish:;
- (long long)imageXUploadGetNetState:;
- (void)imageXUpload:onLogInfo:;
- (id)imageUploadClient;
- (void)setImageUploadClient:;
- (id)uploadErrorWithReason:;
- (void)setSingleImageCompletion:;
- (void)setUploadResult:;
- (id)singleImageCompletion;
- (id)uploadResult;
- (void)uploadWithRequest:singleImageCompletion:completion:;
- (void).cxx_destruct;
- (id)onCompletion;
- (void)setOnCompletion:;
@end
