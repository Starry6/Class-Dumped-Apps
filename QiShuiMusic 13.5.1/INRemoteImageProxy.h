@interface INRemoteImageProxy : INImage
@property (nonatomic) NSString _proxyIdentifier;
@property (nonatomic) NSString _storageServiceIdentifier;
@property (nonatomic) BOOL isValid;
- (id)_identifier;
- (void)_retrieveImageDataWithReply:;
- (id)_dictionaryRepresentation;
- (id)_copyWithSubclass:;
- (id)initWithCoder:;
- (void)_loadImageDataAndSizeWithHelper:accessSpecifier:completion:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)_proxyIdentifier;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:;
- (void)purgeStoredImageWithCompletion:;
- (void)unproxyImageFromService:reply:;
- (id)retrieveProxiedImageSynchronouslyUsingService:error:;
- (id)_storageServiceIdentifier;
- (void)_setStorageServiceIdentifier:;
- (void)_setProxyIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (void)requestProxyByStoringImage:qualityOfService:scaled:storeType:completion:;
+ (id)requestProxyByStoringImage:qualityOfService:scaled:storeType:error:;
+ (id)proxyImageSynchronously:usingService:error:;
@end
