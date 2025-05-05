@interface AFCreateMessageRequest : AFSiriRequest
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)_initWithMessage:;
- (id)createResponseWithMessageIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
