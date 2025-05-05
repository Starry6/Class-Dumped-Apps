@interface SFCommandEngagementFeedback : SFFeedback
@property (nonatomic) SFSearchResult result;
@property (nonatomic) Q triggerEvent;
@property (nonatomic) SFCommand command;
@property (nonatomic) SFCardSection cardSection;
@property (nonatomic) SFButtonItem button;
@property (nonatomic) SFResultSection resultSection;
- (id)cardSection;
- (id)result;
- (void)setCardSection:;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)command;
- (id)button;
- (void).cxx_destruct;
- (id)resultSection;
- (void)setButton:;
- (void)setCommand:;
- (void)setResult:;
- (id)copyWithZone:;
- (id)initWithCommand:cardSection:result:button:;
- (id)initWithCommand:cardSection:;
- (void)setResultSection:;
+ (BOOL)supportsSecureCoding;
@end
