@interface LNQueryParametersValueType : LNValueType
- (id)init;
- (Class)objectClass;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
