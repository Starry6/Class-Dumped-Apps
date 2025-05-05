@interface STContactAddress : STSiriModelObject
- (id)contactIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:stringValue:;
- (id)initWithStringValue:;
- (id)initWithType:stringValue:contactIdentifier:contactInternalGUID:;
- (id)contactInternalGUID;
- (id)_aceContextObjectValue;
+ (BOOL)supportsSecureCoding;
@end
