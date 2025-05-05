@interface IESLivePrivilegeEntranceProfileAnimationFactory : NSObject
- (void)playActiveAnimationOn:activeWebp:changeStateBlock:;
- (void)playGuideAnimationOn:;
- (void)playWebpOnView:webpData:completion:;
- (void)playWillInactiveGuideAnimationOn:;
@end
