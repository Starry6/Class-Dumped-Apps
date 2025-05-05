@interface DMFSetAirPlayRouteRequest : DMFTaskRequest
@property (nonatomic) NSString routeUID;
@property (nonatomic) NSString password;
@property (nonatomic) BOOL suppressPasscodePrompt;
- (void)setPassword:;
- (id)password;
- (id)routeUID;
- (void)setRouteUID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)suppressPasscodePrompt;
- (void)setSuppressPasscodePrompt:;
+ (BOOL)supportsSecureCoding;
@end
