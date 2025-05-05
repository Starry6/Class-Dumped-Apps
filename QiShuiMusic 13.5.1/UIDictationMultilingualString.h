@interface UIDictationMultilingualString : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString dominantLanguage;
@property (nonatomic) @ correctionIdentifier;
@property (nonatomic) NSString interactionIdentifier;
@property (nonatomic) NSArray phrases;
- (void)setText:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)dictionaryValue;
- (void)encodeWithCoder:;
- (id)interactionIdentifier;
- (void)setInteractionIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dominantLanguage;
- (id)initWithText:forLanguage:;
- (void)setDominantLanguage:;
- (id)correctionIdentifier;
- (void)setCorrectionIdentifier:;
- (id)phrases;
- (void)setPhrases:;
@end
