@interface AFSiriResponse : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithRequest:;
- (id)_initWithRequestIdentifier:;
- (BOOL)_isForRequest:;
+ (BOOL)supportsSecureCoding;
@end
