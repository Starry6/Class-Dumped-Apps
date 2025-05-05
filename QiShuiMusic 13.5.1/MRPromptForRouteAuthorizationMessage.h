@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage
@property (nonatomic) MRAVOutputDevice route;
@property (nonatomic) q inputType;
- (id)route;
- (unsigned long long)type;
- (void).cxx_destruct;
- (long long)inputType;
- (id)initWithRoute:inputType:;
@end
