@interface AWEFeedIpadLongPressPanelService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createLongPressPanelForPadWithModel:configuration:;
- (id)createMorePanelWithModel:configuration:;
- (double)sheetWidthForViewController:;
- (double)sheetToppadding;
- (id)iPadAutoPlayViewModel;
- (id)iPadPiPViewModel;
@end
