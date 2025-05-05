@interface GEODataRequestThrottlerToken : NSObject
- (void)refresh;
- (id)init;
- (void)encodeWithXPCCoder:;
- (id)initWithRequest:forClient:;
- (BOOL)isValidForRequest:client:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithXPCCoder:;
+ (BOOL)supportsSecureCoding;
@end
