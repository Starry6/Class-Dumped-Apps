@interface CJPayISecEngimaImpl : NSObject
@property (nonatomic) IsecGM engimaEngine;
@property (nonatomic) NSString customCert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customCert;
- (id)decryptWith:errorCode:;
- (id)defaultToken;
- (id)encryptWith:errorCode:;
- (id)encryptWithData:errorCode:;
- (id)engimaEngine;
- (id)p_currentPayToken;
- (id)p_customDecryptWith:errorCode:;
- (id)p_customEncryptWith:errorCode:;
- (id)p_customEncryptWithData:errorCode:;
- (void)setCustomCert:;
- (void)setEngimaEngine:;
- (id)sm4Decrypt:key:errorCode:;
- (id)sm4Encrypt:key:errorCode:;
- (void).cxx_destruct;
+ (id)getEngimaProtocolBy:;
+ (id)getEngimaProtocolBy:useCert:;
+ (id)globalSM4KeyData;
+ (id)oneKeyAssemble;
+ (BOOL)shouldOneKeyAssemble;
@end
