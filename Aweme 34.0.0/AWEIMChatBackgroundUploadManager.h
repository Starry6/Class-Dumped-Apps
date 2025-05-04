@interface AWEIMChatBackgroundUploadManager : NSObject
@property (nonatomic) <AWEIMNextGenerationUploadFileClientProtocol> unencryptedUploadClient;
@property (nonatomic) <AWEIMNextGenerationUploadFileClientProtocol> encryptedUploadClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventManagerDidUpdate:;
- (void)uploadImage:completion:;
- (void)uploadImageV2:completion:;
- (void)uploadImageBase64String:encrypted:completion:;
- (BOOL)isAuthError:;
- (id)cropAndCompressImage:;
- (void)setEncryptedUploadClient:;
- (void)setUnencryptedUploadClient:;
- (void)p_uploadWithContext:leftRetryCount:encrypted:;
- (id)unencryptedUploadClient;
- (id)encryptedUploadClient;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
