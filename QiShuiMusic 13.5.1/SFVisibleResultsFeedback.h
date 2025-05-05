@interface SFVisibleResultsFeedback : SFFeedback
@property (nonatomic) NSArray results;
@property (nonatomic) Q triggerEvent;
@property (nonatomic) SFSearchResult goTakeoverResult;
@property (nonatomic) NSArray uniqueIdsOfVisibleButtons;
@property (nonatomic) NSArray uniqueIdentifiersOfVisibleCardSections;
- (void)setGoTakeoverResult:;
- (id)uniqueIdentifiersOfVisibleCardSections;
- (void)setTriggerEvent:;
- (id)goTakeoverResult;
- (unsigned long long)triggerEvent;
- (id)uniqueIdsOfVisibleButtons;
- (id)initWithResults:triggerEvent:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)results;
- (id)initWithResults:triggerEvent:visibleButtons:visibleCardSections:;
- (void).cxx_destruct;
- (id)description;
- (void)setUniqueIdentifiersOfVisibleCardSections:;
- (void)setUniqueIdsOfVisibleButtons:;
- (void)setResults:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
