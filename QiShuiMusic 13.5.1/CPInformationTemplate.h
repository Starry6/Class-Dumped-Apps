@interface CPInformationTemplate : CPTemplate
@property (nonatomic) NAFuture templateProviderFuture;
@property (nonatomic) q layout;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray actions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setActions:;
- (id)items;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setItems:;
- (long long)layout;
- (id)title;
- (id)actions;
- (void)performUpdate;
- (void).cxx_destruct;
- (void)handleActionForControlIdentifier:;
- (id)initWithTitle:layout:items:actions:;
- (id)_sanitizeItems:;
- (id)_sanitizeButtons:;
- (void)updateTemplatePropertiesFromTemplate:;
+ (BOOL)supportsSecureCoding;
@end
