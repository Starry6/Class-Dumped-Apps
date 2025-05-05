@interface AFSpeechPhrase : NSObject
@property (nonatomic) NSArray interpretations;
@property (nonatomic) BOOL isLowConfidence;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithInterpretations:isLowConfidence:;
- (id)bestInterpretation;
- (id)interpretations;
- (BOOL)isLowConfidence;
- (void)setIsLowConfidence:;
- (id)firstInterpretation;
- (id)allInterpretationStringsAndScores;
- (void)setInterpretations:;
+ (BOOL)supportsSecureCoding;
@end
