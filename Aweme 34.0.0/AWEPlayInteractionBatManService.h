@interface AWEPlayInteractionBatManService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showBatManEnterenceIfNeeded:videoEnterFrom:model:viewController:delegete:addTracker:;
- (void)clearEntranceWithAweme:;
- (void)stopShow;
- (void)disableBatManTimerWithModel:;
- (BOOL)isShowingBatMan;
- (BOOL)isBatManURLString:;
@end
