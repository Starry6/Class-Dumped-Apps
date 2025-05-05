@interface BDTGPrivateKeyManager : NSObject
@property (nonatomic) NSMutableArray loadCompletionBlocks;
@property (nonatomic) q isFromCache;
@property (nonatomic) NSString keyType;
- (id)ecdhKey;
- (id)publicKeyBase64;
- (id)ecdhKey:;
- (void)getPrivateKeyDidFail;
- (void)getPrivateKeyDidSuccess:;
- (id)loadCompletionBlocks;
- (void)loadPrivateKeyWithScene:completion:;
- (id)p_loadPrivateKey;
- (void)preloadECDHKeyAsync;
- (void)preloadPublicKeyBase64Async;
- (id)privateKeySync;
- (id)privateKeyWithTimeout:;
- (id)privateKeyWithTimeout:error:;
- (id)safeGetPrivateKey;
- (void)safeSetPrivateKey:;
- (void)setLoadCompletionBlocks:;
- (id)init;
- (void)setIsFromCache:;
- (long long)isFromCache;
- (void).cxx_destruct;
- (id)keyType;
@end
