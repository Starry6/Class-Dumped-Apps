@interface AFSiriTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void)failWithError:;
- (void).cxx_destruct;
- (id)description;
- (void)completeWithResponse:;
- (id)_initWithRequest:remoteResponseListenerEndpoint:usageResultListenerEndpoint:;
- (id)_responseHandlerConnection;
- (void)_invalidateConnectionAfterMessageSent:;
- (id)_usageResultHandlerConnection;
- (void)reportUsageResult:;
+ (BOOL)supportsSecureCoding;
@end
