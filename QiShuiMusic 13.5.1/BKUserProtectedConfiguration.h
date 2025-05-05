@interface BKUserProtectedConfiguration : NSObject
@property (nonatomic) NSNumber unlockEnabled;
@property (nonatomic) NSNumber identificationEnabled;
@property (nonatomic) NSNumber loginEnabled;
@property (nonatomic) NSNumber applePayEnabled;
@property (nonatomic) NSNumber attentionDetectionEnabled;
@property (nonatomic) NSNumber periocularFaceIDMatchEnabled;
- (id)dictionary;
- (void)setAttentionDetectionEnabled:;
- (id)attentionDetectionEnabled;
- (void)setUnlockEnabled:;
- (void)setLoginEnabled:;
- (id)identificationEnabled;
- (void)setApplePayEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)loginEnabled;
- (id)applePayEnabled;
- (void)setIdentificationEnabled:;
- (id)unlockEnabled;
- (id)periocularFaceIDMatchEnabled;
- (id)initWithDictionary:effective:;
- (void)setPeriocularFaceIDMatchEnabled:;
@end
