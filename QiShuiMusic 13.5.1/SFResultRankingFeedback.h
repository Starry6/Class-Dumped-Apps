@interface SFResultRankingFeedback : SFFeedback
@property (nonatomic) SFSearchResult result;
@property (nonatomic) NSArray hiddenResults;
@property (nonatomic) NSArray duplicateResults;
@property (nonatomic) Q localResultPosition;
@property (nonatomic) double personalizationScore;
- (double)personalizationScore;
- (id)result;
- (void)setLocalResultPosition:;
- (id)initWithCoder:;
- (id)duplicateResults;
- (void)encodeWithCoder:;
- (id)hiddenResults;
- (id)initWithResult:hiddenResults:duplicateResults:localResultPosition:;
- (void).cxx_destruct;
- (void)setPersonalizationScore:;
- (unsigned long long)localResultPosition;
- (void)setDuplicateResults:;
- (void)setResult:;
- (void)setHiddenResults:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
