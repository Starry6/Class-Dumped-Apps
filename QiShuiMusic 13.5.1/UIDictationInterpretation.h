@interface UIDictationInterpretation : NSObject
@property (nonatomic) double averageConfidenceScore;
@property (nonatomic) NSArray tokens;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) BOOL removeSpaceAfter;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)tokens;
- (BOOL)removeSpaceBefore;
- (BOOL)removeSpaceAfter;
- (id)initWithTokens:;
- (id)initWithTokens:score:;
- (id)serializedInterpretationWithTransform:;
- (double)averageConfidenceScore;
- (void)setAverageConfidenceScore:;
+ (BOOL)supportsSecureCoding;
+ (id)serializedInterpretationFromTokens:transform:;
@end
