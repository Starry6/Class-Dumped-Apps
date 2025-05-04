@interface AWESECAppJumpGatewayModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)appJumpGatewayEnabled;
- (long long)appJumpGateway:confirmAction:cancelAction:;
- (void)showOpenFailedToast;
@end
