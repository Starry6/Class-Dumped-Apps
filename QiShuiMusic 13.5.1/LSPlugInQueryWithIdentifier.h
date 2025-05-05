@interface LSPlugInQueryWithIdentifier : LSPlugInQuery
- (id)_identifier;
- (void)_enumerateWithXPCConnection:block:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isBindingMapValid;
- (void).cxx_destruct;
- (id)_initWithIdentifier:inMap:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
