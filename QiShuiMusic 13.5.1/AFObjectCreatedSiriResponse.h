@interface AFObjectCreatedSiriResponse : AFSiriResponse
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_objectIdentifier;
- (id)_initWithRequest:objectIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
