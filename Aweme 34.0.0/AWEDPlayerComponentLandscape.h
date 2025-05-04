@interface AWEDPlayerComponentLandscape : AWEDPlayerBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (void)changePlayerFrameIfNeededWithAnimated:;
- (void)updatePlayerControllerFrame;
- (void)updatePauseIconFrameForFakeLandscape;
- (BOOL)realChangePlayerFrameIfNeeded;
- (BOOL)shouldChangeFrameForLandscape;
- (void)viewWillLayoutSubviews;
+ (Class)aAWEPadModuleAdapterClass;
@end
