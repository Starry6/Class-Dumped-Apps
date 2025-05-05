@interface SAIntentGroupDetailLabelTemplateComponent : SAIntentGroupLabelTemplateComponent
@property (nonatomic) NSString detailText;
- (id)groupIdentifier;
- (void)setDetailText:;
- (id)detailText;
- (id)encodedClassName;
+ (id)detailLabelTemplateComponent;
+ (id)detailLabelTemplateComponentWithDictionary:context:;
@end
