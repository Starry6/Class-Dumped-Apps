@interface AFPhonemeTranscription : NSObject
@property (nonatomic) NSString orthography;
@property (nonatomic) NSString language;
@property (nonatomic) NSArray phonemeSuggestions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLanguage:;
- (id)language;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)orthography;
- (void)setOrthography:;
- (id)phonemeSuggestions;
- (void)setPhonemeSuggestions:;
+ (BOOL)supportsSecureCoding;
@end
