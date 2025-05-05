@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage
@property (nonatomic) MRAVOutputDevice route;
@property (nonatomic) NSInteger status;
- (id)route;
- (unsigned long long)type;
- (void).cxx_destruct;
- (int)status;
- (id)initWithRoute:status:;
@end
