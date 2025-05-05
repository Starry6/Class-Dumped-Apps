@interface FARegisterPushTokenRequest : FAFamilyCircleRequest
@property (nonatomic) NSData pushToken;
- (id)pushToken;
- (void)startRequestWithCompletionHandler:;
- (void).cxx_destruct;
- (id)initWithPushToken:;
@end
