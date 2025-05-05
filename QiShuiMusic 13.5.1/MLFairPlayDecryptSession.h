@interface MLFairPlayDecryptSession : NSObject
@property (nonatomic) NSString modelPath;
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSObject<CoreMLModelSecurityProtocol> xpcProxy;
- (void)setModelPath:;
- (void)dealloc;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)modelPath;
- (id)xpcProxy;
- (void)setXpcProxy:;
+ (id)decryptSessionForModelAtPath:usesCodeSigningIdentityForEncryption:keyBlob:error:;
@end
