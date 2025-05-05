@interface INShowPersonInteractionsIntent : INIntent
@property (nonatomic) INPerson person;
@property (nonatomic) NSString focusItemIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPerson:;
- (id)person;
- (id)copyWithZone:;
- (id)focusItemIdentifier;
- (void)setFocusItemIdentifier:;
- (id)initWithPerson:focusItemIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
