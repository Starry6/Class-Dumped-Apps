@interface SFSectionEngagementFeedback : SFFeedback
@property (nonatomic) SFResultSection section;
@property (nonatomic) Q triggerEvent;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (id)initWithCoder:;
- (void)setSection:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)section;
- (id)copyWithZone:;
- (id)initWithSection:triggerEvent:;
+ (BOOL)supportsSecureCoding;
@end
