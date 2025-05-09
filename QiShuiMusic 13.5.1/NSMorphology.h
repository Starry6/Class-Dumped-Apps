@interface NSMorphology : NSObject
@property (nonatomic) BOOL unspecified;
@property (nonatomic) NSDictionary _externalRepresentationDictionary;
@property (nonatomic) NSData _externalRepresentation;
@property (nonatomic) NSDictionary _customPronouns;
@property (nonatomic) NSDictionary _customPronouns;
@property (nonatomic) q grammaticalGender;
@property (nonatomic) q partOfSpeech;
@property (nonatomic) q number;
- (void)dealloc;
- (long long)number;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setNumber:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)grammaticalGender;
- (long long)partOfSpeech;
- (id)_customPronouns;
- (void)_setCustomPronouns:;
- (void)setPartOfSpeech:;
- (void)setGrammaticalGender:;
- (id)customPronounForLanguage:;
- (BOOL)setCustomPronoun:forLanguage:error:;
- (BOOL)isUnspecified;
- (id)_initWithExternalRepresentation:error:;
- (id)_initWithExternalRepresentationDictionary:;
- (id)_externalRepresentationDictionary;
- (id)_externalRepresentation;
- (id)initWithInflection:;
+ (BOOL)supportsSecureCoding;
+ (id)userMorphology;
+ (void)_clearCachedUserMorphology;
+ (void)_getUserMorphology:userInflection:;
@end
