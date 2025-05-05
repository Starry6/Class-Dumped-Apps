@interface SAIntentGroupLabelTemplateComponent : SADomainObject
@property (nonatomic) NSString labelTemplateComponentStyle;
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
- (id)labelTemplateComponentStyle;
- (void)setLabelTemplateComponentStyle:;
+ (id)labelTemplateComponent;
+ (id)labelTemplateComponentWithDictionary:context:;
@end
