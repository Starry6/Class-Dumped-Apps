@interface AFSpeechInterpretation : NSObject
@property (nonatomic) NSArray tokens;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTokens:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)text;
- (BOOL)isEqual:;
- (id)tokens;
- (long long)confidenceScore;
- (long long)averageConfidenceScore;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;
- (long long)confidenceScoreAvg;
+ (BOOL)supportsSecureCoding;
@end
