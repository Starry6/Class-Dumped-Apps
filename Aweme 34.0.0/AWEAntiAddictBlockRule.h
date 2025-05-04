@interface AWEAntiAddictBlockRule : AWEExternalRouterBlockBaseRule
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
- (BOOL)p_isURLInAllowList:;
@end
