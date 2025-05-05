@interface SFSectionRankingFeedback : SFFeedback
@property (nonatomic) NSArray results;
@property (nonatomic) SFResultSection section;
@property (nonatomic) Q localSectionPosition;
@property (nonatomic) double personalizationScore;
- (double)personalizationScore;
- (id)initWithCoder:;
- (void)setSection:;
- (void)setLocalSectionPosition:;
- (unsigned long long)localSectionPosition;
- (void)encodeWithCoder:;
- (id)results;
- (void).cxx_destruct;
- (id)initWithResults:section:localSectionPosition:personalizationScore:;
- (void)setPersonalizationScore:;
- (id)section;
- (void)setResults:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
