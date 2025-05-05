@interface SFResultEngagementFeedback : SFResultFeedback
@property (nonatomic) BOOL actionEngaged;
@property (nonatomic) BOOL matchesUnengagedSuggestion;
@property (nonatomic) Q triggerEvent;
@property (nonatomic) Q destination;
@property (nonatomic) Q actionTarget;
- (void)setDestination:;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (unsigned long long)destination;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)actionEngaged;
- (unsigned long long)actionTarget;
- (void)setActionTarget:;
- (BOOL)matchesUnengagedSuggestion;
- (void)setMatchesUnengagedSuggestion:;
- (id)initWithResult:actionEngaged:triggerEvent:destination:;
- (id)initWithResult:triggerEvent:destination:;
- (id)initWithResult:triggerEvent:destination:actionTarget:;
+ (BOOL)supportsSecureCoding;
@end
