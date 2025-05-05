@interface AFSiriDebugUIRequest : AFSiriRequest
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)createResponse;
- (id)initWithMessage:makeAppFrontmost:;
- (BOOL)_makeAppFrontmost;
+ (BOOL)supportsSecureCoding;
@end
