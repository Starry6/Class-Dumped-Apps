@interface AWEPrivacyAlertBlockRule : AWEExternalRouterBlockBaseRule
- (void)handleURLString:context:scene:linkSession:completion:;
- (BOOL)needBlockURLString:context:;
@end
