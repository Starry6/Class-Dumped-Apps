@interface AWELongPressInteractionModeViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) BOOL hasTrackShow;
- (BOOL)needShow;
- (void)setHasTrackShow:;
- (BOOL)hasTrackShow;
- (void)configVM;
- (void)trackInteractionModeSwitchClick:;
- (void)trackInteractionModeSwitchShow;
- (BOOL)needShowForScene:;
+ (id)longPressPanelViewModel;
@end
