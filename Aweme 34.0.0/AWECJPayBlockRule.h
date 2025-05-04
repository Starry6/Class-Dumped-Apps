@interface AWECJPayBlockRule : AWEExternalRouterBlockBaseRule
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
- (BOOL)p_isHitCJDYPayUniversalLink:;
- (id)p_transferCJDYPayUniversalLinkToScheme:;
- (BOOL)p_isHitCJNFCUniversalLink:;
- (id)p_transferNFCUniversalLinkToScheme:;
- (BOOL)CJPayHanldeURL:linkSession:;
- (long long)getSchemeType:;
@end
