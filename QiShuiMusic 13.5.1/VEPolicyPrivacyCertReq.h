@interface VEPolicyPrivacyCertReq : IESMMObject
@property (nonatomic) @ startVideoPrivacyCert;
@property (nonatomic) @ startAudioPrivacyCert;
- (id)getPrivacyCertWithType:;
- (id)startVideoPrivacyCert;
- (void)setStartVideoPrivacyCert:;
- (id)startAudioPrivacyCert;
- (void)setStartAudioPrivacyCert:;
- (void).cxx_destruct;
+ (id)sharedinstance;
@end
