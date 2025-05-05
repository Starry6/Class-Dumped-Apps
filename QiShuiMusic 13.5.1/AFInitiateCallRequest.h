@interface AFInitiateCallRequest : AFSiriRequest
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)call;
- (id)createResponse;
- (id)_initWithCall:;
+ (BOOL)supportsSecureCoding;
@end
