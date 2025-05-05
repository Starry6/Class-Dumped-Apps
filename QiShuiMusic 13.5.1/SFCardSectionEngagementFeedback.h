@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback
@property (nonatomic) SFPunchout destination;
@property (nonatomic) Q triggerEvent;
@property (nonatomic) Q actionCardType;
@property (nonatomic) Q actionTarget;
- (void)setDestination:;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (id)destination;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)actionTarget;
- (unsigned long long)actionCardType;
- (void)setActionCardType:;
- (void)setActionTarget:;
- (id)initWithCardSection:destination:triggerEvent:actionCardType:;
+ (BOOL)supportsSecureCoding;
@end
