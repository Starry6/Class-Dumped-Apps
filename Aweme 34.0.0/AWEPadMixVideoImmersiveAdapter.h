@interface AWEPadMixVideoImmersiveAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateImmersiveDetailControllerLayoutWithShowStatus:animated:;
- (void)updateMixVideoContainerLayoutWithImmersiveShowStatus:;
- (void)performViewWillTransToSize:withTransitionCoordinator:;
- (BOOL)closeMixVideoTableAutoresizeMaskWithReferString:;
- (BOOL)closeImmersiveDetailViewAutoresizingMaskWithReferString:;
- (BOOL)enablePadCustomActiveInCurrentTopViewController;
- (BOOL)mixPanelNeedShowWhenEnterMixVideoDetailVc;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (BOOL)Enable;
@end
