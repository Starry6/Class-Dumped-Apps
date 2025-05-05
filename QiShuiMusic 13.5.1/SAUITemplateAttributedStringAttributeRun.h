@interface SAUITemplateAttributedStringAttributeRun : AceObject
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) SAUITemplateRange range;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setRange:;
- (void)setAttributes:;
- (id)attributes;
- (id)range;
- (id)encodedClassName;
+ (id)attributedStringAttributeRun;
+ (id)attributedStringAttributeRunWithDictionary:context:;
@end
