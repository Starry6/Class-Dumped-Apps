@interface IESLiveSaaSPrivilegeEntranceProfileAnimationFactory : NSObject
- (void)playActiveAnimationOn:activeWebp:changeStateBlock:;
- (void)playGuideAnimationOn:;
- (void)playWebpOnView:webpData:completion:;
- (void)playWillInactiveGuideAnimationOn:;
@end
