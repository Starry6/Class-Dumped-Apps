@interface CRLanguageModelConfiguration : NSObject
@property (nonatomic) NSArray filteringCharLengths;
@property (nonatomic) NSArray lmFilteringThresholds;
@property (nonatomic) NSNumber lexiconWeight;
@property (nonatomic) NSNumber characterLMWeight;
@property (nonatomic) NSNumber wordLMWeight;
@property (nonatomic) float filteringActivationThreshold;
@property (nonatomic) q filteringMinimumLength;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (float)lmThresholdForLength:;
- (id)lexiconWeight;
- (id)characterLMWeight;
- (id)wordLMWeight;
- (float)filteringActivationThreshold;
- (long long)filteringMinimumLength;
- (id)filteringCharLengths;
- (void)setFilteringCharLengths:;
- (id)lmFilteringThresholds;
- (void)setLmFilteringThresholds:;
+ (id)configurationForLanguageIdentifier:rev:;
@end
