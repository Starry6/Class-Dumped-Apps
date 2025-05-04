@interface AWEPOIDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL isShareReflow;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (BOOL)onConfigWithRouterParamDict:;
- (void)onDidRequestUser:error:;
- (void)setIsShareReflow:;
- (BOOL)isShareReflow;
- (void)dealloc;
@end
