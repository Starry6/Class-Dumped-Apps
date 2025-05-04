@interface AWENearbySnackBarHandles : AWELifeSnackBarBaseHandle
- (BOOL)inCurrentTab;
- (BOOL)inCurrentTabAndTopVc;
- (void)handleVideoPlayFinish:;
- (void)handleLifeAnchorClick:;
- (id)checkActionCanShowBarWithAction:aweme:;
- (id)tabPinTopShowImp;
@end
