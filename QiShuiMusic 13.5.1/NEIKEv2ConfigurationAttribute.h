@interface NEIKEv2ConfigurationAttribute : NSObject
@property (nonatomic) Q attributeType;
@property (nonatomic) Q valueType;
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (unsigned long long)valueType;
- (id)attributeName;
- (id)initEmptyRequest;
+ (id)copyTypeDescription;
@end
