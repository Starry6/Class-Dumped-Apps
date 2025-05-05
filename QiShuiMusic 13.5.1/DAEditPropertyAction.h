@interface DAEditPropertyAction : DAAction
@property (nonatomic) NSString propertyName;
@property (nonatomic) NSString value;
@property (nonatomic) NSString propertyNamespace;
- (id)propertyName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithChangedItem:propertyName:value:propertyNamespace:serverId:;
- (id)propertyNamespace;
+ (BOOL)supportsSecureCoding;
@end
