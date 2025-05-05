@interface AVSpeechSynthesisVoice : NSObject
@property (nonatomic) NSString language;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) q quality;
@property (nonatomic) q gender;
@property (nonatomic) NSDictionary audioFileSettings;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)audioFileSettings;
+ (BOOL)supportsSecureCoding;
+ (id)currentLanguageCode;
+ (id)speechVoices;
+ (id)voiceWithLanguage:;
+ (id)voiceWithIdentifier:;
@end
