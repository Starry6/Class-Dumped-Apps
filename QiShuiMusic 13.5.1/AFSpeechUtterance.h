@interface AFSpeechUtterance : NSObject
@property (nonatomic) NSArray interpretationIndices;
@property (nonatomic) q confidenceScore;
@property (nonatomic) q source;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)source;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (long long)confidenceScore;
- (void)setConfidenceScore:;
- (id)initWithInterpretationIndices:confidenceScore:;
- (id)interpretationIndices;
- (void)setInterpretationIndices:;
+ (BOOL)supportsSecureCoding;
@end
