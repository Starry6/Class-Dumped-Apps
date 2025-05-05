@interface UIDictationInterpretationGroup : NSObject
@property (nonatomic) NSArray interpretations;
@property (nonatomic) double bestConfidenceScore;
@property (nonatomic) UIDictationInterpretation bestInterpretation;
@property (nonatomic) BOOL isLowConfidence;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInterpretations:;
- (id)initWithInterpretations:isLowConfidence:;
- (double)bestConfidenceScore;
- (id)bestInterpretation;
- (id)interpretations;
- (BOOL)isLowConfidence;
+ (BOOL)supportsSecureCoding;
@end
