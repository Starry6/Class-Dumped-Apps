@interface AWETeenModeBlockRule : AWEExternalRouterBlockBaseRule
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
- (BOOL)hitAllowList:;
- (id)allowList;
@end
