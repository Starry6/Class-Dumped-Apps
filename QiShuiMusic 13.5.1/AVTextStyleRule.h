@interface AVTextStyleRule : NSObject
@property (nonatomic) NSDictionary textMarkupAttributes;
@property (nonatomic) NSString textSelector;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)textSelector;
- (id)textMarkupAttributes;
- (id)initWithTextMarkupAttributes:textSelector:;
- (id)initWithTextMarkupAttributes:;
- (id)_dictionaryPlistRepresentation;
+ (id)propertyListForTextStyleRules:;
+ (id)textStyleRulesFromPropertyList:;
+ (id)textStyleRuleWithTextMarkupAttributes:;
+ (id)textStyleRuleWithTextMarkupAttributes:textSelector:;
@end
