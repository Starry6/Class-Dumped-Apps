@interface SSVPushNotificationRequest : SSRequest
@property (nonatomic) SSVPushNotificationParameters pushNotificationParameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:;
- (void).cxx_destruct;
- (void)startWithResponseBlock:;
- (id)initWithPushNotificationParameters:;
- (id)pushNotificationParameters;
- (void)setPushNotificationParameters:;
@end
