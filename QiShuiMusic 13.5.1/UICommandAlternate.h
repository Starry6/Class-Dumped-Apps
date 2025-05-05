@interface UICommandAlternate : NSObject
@property (nonatomic) @ sender;
@property (nonatomic) NSString title;
@property (nonatomic) : action;
@property (nonatomic) q modifierFlags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_resolvedTargetFromFirstTarget:sender:;
- (id)sender;
- (SEL)action;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (long long)_leafKeyModifierFlags;
- (void).cxx_destruct;
- (long long)modifierFlags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)_performWithTarget:sender:;
- (id)initWithModifierFlags:;
- (id)initWithTitle:action:modifierFlags:;
+ (BOOL)supportsSecureCoding;
+ (id)alternateWithTitle:action:modifierFlags:;
@end
