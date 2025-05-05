@interface MLFairPlayKeyLoadingSession : NSObject
@property (nonatomic) NSString keyIdentifier;
@property (nonatomic) I sessionID;
@property (nonatomic) ^{?=III{?=II[136C]I[4096C][128C]}{?=[16C][16C][16C][128C]}} sessionContext;
- (void)setSessionID:;
- (unsigned int)sessionID;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)keyIdentifier;
- (void)setKeyIdentifier:;
- (id)sessionContext;
- (void)setSessionContext:;
- (id)transformKeyIdentifier:error:;
- (id)generateKeyRequestForKeyIdentifier:teamIdentifier:error:;
- (id)generatePersistentKeyBlobFromKeyResponse:error:;
@end
