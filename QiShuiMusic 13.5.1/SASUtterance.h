@interface SASUtterance : AceObject
@property (nonatomic) double confidenceScore;
@property (nonatomic) NSArray interpretationIndices;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (double)confidenceScore;
- (void)setConfidenceScore:;
- (id)interpretationIndices;
- (void)setInterpretationIndices:;
+ (id)utterance;
+ (id)utteranceWithDictionary:context:;
@end
