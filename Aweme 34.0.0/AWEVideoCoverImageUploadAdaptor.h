@interface AWEVideoCoverImageUploadAdaptor : NSObject
@property (nonatomic) <ACCFileUploadServiceProtocol> uploadService;
@property (nonatomic) NSDictionary checkAuthParams;
- (id)compressImage:;
- (id)initWithCheckAuthParams:;
- (void)uploadImage:needCompress:completion:;
- (void)uploadImageByMaxResolution:maxResolution:completion:;
- (void)checkAuthWithCompletion:;
- (id)compressImageByMaxResolution:maxResolution:;
- (id)checkAuthParams;
- (void)setCheckAuthParams:;
- (void).cxx_destruct;
- (void)setUploadService:;
- (id)uploadService;
+ (void)trackWithError:;
@end
