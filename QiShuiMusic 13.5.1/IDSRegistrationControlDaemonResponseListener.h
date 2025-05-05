@interface IDSRegistrationControlDaemonResponseListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)registrationControlResponseForRequestID:withError:;
- (void)registrationControlStatusResponseForRequestID:requestID:withError:;
- (id)initWithRequestTimer:;
@end
