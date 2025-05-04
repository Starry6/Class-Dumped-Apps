@interface AWELongPressPanelWatchVideoLaterViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) BOOL hasTrackShow;
- (BOOL)needShow;
- (id)aAWEPlayInteractionAdapter;
- (void)setHasTrackShow:;
- (BOOL)hasTrackShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (void)trackWatchVideoLaterShow;
- (void)addToWatchLater;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;
@end
