@interface ICDelegationConsumerServiceRequest : NSObject
@property (nonatomic) ICRequestContext requestContext;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) NSDictionary userIdentityDelegationAccountUUIDs;
- (double)timeoutInterval;
- (id)requestContext;
- (void).cxx_destruct;
- (id)userIdentityDelegationAccountUUIDs;
- (id)initWithUserIdentityDelegationAccountUUIDs:requestContext:timeoutInterval:;
@end
