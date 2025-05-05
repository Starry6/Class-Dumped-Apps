@interface MRPromptForRouteAuthorizationResponseMessage : MRProtocolMessage
@property (nonatomic) NSString response;
- (id)initWithResponse:;
- (unsigned long long)type;
- (id)response;
@end
