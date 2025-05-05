@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute
@property (nonatomic) NSString stringValue;
- (id)descriptionWithIndent:options:;
- (id)stringValue;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)description;
- (unsigned long long)valueType;
- (id)copyWithZone:;
- (id)initWithStringValue:;
- (id)initCustomWithAttributeType:attributeName:stringValue:;
+ (id)copyTypeDescription;
@end
