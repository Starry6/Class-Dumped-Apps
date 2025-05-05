@interface BKSystemProtectedConfiguration : NSObject
@property (nonatomic) NSNumber biometryEnabled;
@property (nonatomic) NSNumber unlockEnabled;
@property (nonatomic) NSNumber identificationEnabled;
@property (nonatomic) NSNumber loginEnabled;
@property (nonatomic) NSNumber unlockTokenMaxLifetime;
@property (nonatomic) NSNumber periocularFaceIDMatchEnabled;
- (id)dictionary;
- (id)initWithDictionary:;
- (void)setUnlockEnabled:;
- (void)setLoginEnabled:;
- (id)identificationEnabled;
- (void).cxx_destruct;
- (id)description;
- (id)loginEnabled;
- (void)setIdentificationEnabled:;
- (id)unlockEnabled;
- (id)periocularFaceIDMatchEnabled;
- (void)setPeriocularFaceIDMatchEnabled:;
- (id)biometryEnabled;
- (void)setBiometryEnabled:;
- (id)unlockTokenMaxLifetime;
- (void)setUnlockTokenMaxLifetime:;
@end
