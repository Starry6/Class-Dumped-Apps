@interface SAOrCondition : AceObject
@property (nonatomic) NSArray conditions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)conditions;
- (id)groupIdentifier;
- (void)setConditions:;
- (id)encodedClassName;
+ (id)orCondition;
+ (id)orConditionWithDictionary:context:;
@end
