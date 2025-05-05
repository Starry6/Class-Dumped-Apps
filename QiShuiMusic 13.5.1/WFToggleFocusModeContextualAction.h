@interface WFToggleFocusModeContextualAction : WFContextualAction
@property (nonatomic) WFToggleFocusModeContextualActionFocusMode focusMode;
@property (nonatomic) Q operation;
@property (nonatomic) WFContextualActionCalendarEventDescriptor eventDescriptor;
- (unsigned long long)operation;
- (id)uniqueIdentifier;
- (id)focusMode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithFocusMode:operation:event:;
- (id)eventDescriptor;
+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifier;
+ (id)turnOn:;
+ (id)turnOn:untilEventEnds:;
+ (id)turnOff:;
@end
