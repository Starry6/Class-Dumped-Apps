@interface PoPGatewayNetwork : NSObject
@property (nonatomic) SNICFNetworkManager cfNetworkManager;
@property (nonatomic) NSArray backupHostList;
@property (nonatomic) double timeoutForInit;
@property (nonatomic) double timeoutForVerify;
- (void)bizSendContent:completionBlock:;
- (void)sendOCRContent:completionBlock:;
- (id)addValue:forKey:to:;
- (id)aes256_decryptKey:withData:;
- (id)aes256_decryptKey:withSource:;
- (id)backupHostList;
- (id)cfNetworkManager;
- (id)changeFirstword:;
- (id)computeSignature:secret:;
- (id)dictionaryToJson:;
- (void)doPOPRequest:action:param:ak:sk:completionBlock:;
- (id)formatIso8601Date;
- (id)getBackupServerAddress;
- (id)getSignature:data:;
- (void)httpPost:action:extraHeader:param:degradeEndpoint:ak:sk:completionBlock:;
- (BOOL)isPRE;
- (void)sendInitFaceVerifyContent:keyName:initKey:initSimpleValue:completionBlock:;
- (void)sendLogContent:extraHeader:completionBlock:;
- (void)setBackupHostList:;
- (void)setCfNetworkManager:;
- (void)setTimeoutForInit:;
- (void)setTimeoutForVerify:;
- (double)timeoutForInit;
- (double)timeoutForVerify;
- (id)urlEncode:;
- (void)verifySendContent:completionBlock:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)encode:;
- (id)getServerAddress;
+ (id)getAddressFromArray:;
+ (id)getIPAddressWithHost:;
@end
