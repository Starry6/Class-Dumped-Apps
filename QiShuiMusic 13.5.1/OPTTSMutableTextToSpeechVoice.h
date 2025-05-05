@interface OPTTSMutableTextToSpeechVoice : OPTTSTextToSpeechVoice
@property (nonatomic) NSString language;
@property (nonatomic) NSString gender;
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) NSString quality;
@property (nonatomic) NSString type;
- (id)quality;
- (id)init;
- (void)setName:;
- (id)gender;
- (void)setQuality:;
- (void)setLanguage:;
- (id)language;
- (void)setVersion:;
- (id)version;
- (void)setGender:;
- (void)setType:;
- (id)type;
- (id)name;
- (id)copyWithZone:;
@end
