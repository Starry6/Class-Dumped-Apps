@interface MADVIDocumentRecognitionRequest : MADRequest
@property (nonatomic) NSArray languages;
@property (nonatomic) Q maximumCandidateCount;
@property (nonatomic) BOOL usesLanguageDetection;
- (id)init;
- (void)setLanguages:;
- (id)languages;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)maximumCandidateCount;
- (void)setMaximumCandidateCount:;
- (void)setUsesLanguageDetection:;
- (BOOL)usesLanguageDetection;
- (id)initWithLanguages:;
+ (BOOL)supportsSecureCoding;
@end
