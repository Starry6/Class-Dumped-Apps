@interface AWEIMNextGenerationUploadFileController : NSObject
@property (nonatomic) <AWEIMNextGenerationUploadFileClientProtocol> quickUploadClient;
@property (nonatomic) <AWEIMNextGenerationUploadFileClientProtocol> originUploadClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString uploadURL;
@property (nonatomic) @ parameters;
@property (nonatomic) NSString mimeType;
- (void)eventManagerDidUpdate:;
- (id)generateUploadClientOfFileType:config:;
- (BOOL)isAuthError:;
- (id)originUploadClient;
- (id)quickUploadClient;
- (void)setOriginUploadClient:;
- (void)setQuickUploadClient:;
- (void)uploadOriginData:quickData:filePath:fileType:leftRetryCount:progressBlock:completion:;
- (void)uploadOriginData:quickData:filePath:fileType:progressBlock:completion:;
- (id)init;
- (void)setUploadURL:;
- (id)mimeType;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
- (void)setMimeType:;
- (id)uploadURL;
@end
