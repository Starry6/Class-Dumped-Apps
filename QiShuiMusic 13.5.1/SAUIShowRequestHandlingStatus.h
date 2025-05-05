@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand
@property (nonatomic) NSString asrStatus;
@property (nonatomic) NSString executionInputSystem;
@property (nonatomic) NSString requestHandlingStatus;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)asrStatus;
- (void)setAsrStatus:;
- (id)executionInputSystem;
- (void)setExecutionInputSystem:;
- (id)requestHandlingStatus;
- (void)setRequestHandlingStatus:;
@end
