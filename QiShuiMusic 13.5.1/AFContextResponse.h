@interface AFContextResponse : AFSiriResponse
- (id)_context;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithRequest:context:;
+ (BOOL)supportsSecureCoding;
@end
