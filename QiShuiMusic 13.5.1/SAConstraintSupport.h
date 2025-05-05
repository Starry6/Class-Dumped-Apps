@interface SAConstraintSupport : AceObject
@property (nonatomic) <SASupportCondition> condition;
@property (nonatomic) NSString property;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProperty:;
- (id)condition;
- (void)setCondition:;
- (id)groupIdentifier;
- (id)property;
- (id)encodedClassName;
+ (id)constraintSupport;
+ (id)constraintSupportWithDictionary:context:;
@end
