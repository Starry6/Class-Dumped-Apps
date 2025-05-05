@interface CNQuickPropertyAction : CNQuickContactAction
@property (nonatomic) CNPropertyAction propertyAction;
- (unsigned long long)score;
- (BOOL)enabled;
- (id)identifier;
- (id)_coreDuetValue;
- (id)titleForContext:;
- (id)subtitleForContext:;
- (void)performWithCompletionBlock:;
- (id)initWithPropertyAction:;
- (id)propertyAction;
- (id)propertyItem;
@end
