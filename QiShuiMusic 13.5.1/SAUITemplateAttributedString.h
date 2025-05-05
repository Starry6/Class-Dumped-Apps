@interface SAUITemplateAttributedString : AceObject
@property (nonatomic) NSArray attributeRuns;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
- (id)attributeRuns;
- (void)setAttributeRuns:;
+ (id)attributedString;
+ (id)attributedStringWithDictionary:context:;
@end
