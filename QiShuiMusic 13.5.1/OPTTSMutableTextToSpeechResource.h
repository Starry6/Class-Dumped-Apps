@interface OPTTSMutableTextToSpeechResource : OPTTSTextToSpeechResource
@property (nonatomic) NSString language;
@property (nonatomic) NSString version;
- (id)init;
- (void)setLanguage:;
- (id)language;
- (void)setVersion:;
- (id)version;
- (id)copyWithZone:;
@end
