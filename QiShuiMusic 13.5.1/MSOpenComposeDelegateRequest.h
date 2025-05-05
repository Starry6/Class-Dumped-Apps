@interface MSOpenComposeDelegateRequest : MSXPCService
- (id)init;
- (void)checkInComposeWithIdentifier:completion:;
@end
