@interface AWEPVerifyTask : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)verifyAccountPassword:verifyTicket:completion:;
- (void)verifyBindThird:verifyTicket:platform:completion:;
- (void)verifyUpstreamSMSWithVerifyTicket:completion:;
+ (id)verifyAccountPassword:verifyTicket:;
+ (id)verifyBindThird:verifyTicket:platform:;
+ (id)verifyUpstreamSMSWithVerifyTicket:;
+ (id)startUpstreamSMSQueryVerifyWithTicket:;
@end
