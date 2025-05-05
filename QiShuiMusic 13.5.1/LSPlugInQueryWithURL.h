@interface LSPlugInQueryWithURL : LSPlugInQuery
- (id)_initWithURL:;
- (void)_enumerateWithXPCConnection:block:;
- (id)_bundleURL;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
