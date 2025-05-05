@interface SAWeatherCondition : AceObject
@property (nonatomic) NSString conditionCode;
@property (nonatomic) q conditionCodeIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)conditionCode;
- (void)setConditionCode:;
- (long long)conditionCodeIndex;
- (void)setConditionCodeIndex:;
+ (id)condition;
+ (id)conditionWithDictionary:context:;
@end
