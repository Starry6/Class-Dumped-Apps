@interface AWELongPressPanelScreenCastViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) double lastTappedTime;
- (void)showPopoverIfNeeded;
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (double)getCellToScreenBottomDistance;
- (void)recordClickScreenCast;
- (BOOL)checkCanShowPopover;
- (void)recordShowPopOver;
- (double)lastTappedTime;
- (void)setLastTappedTime:;
+ (id)longPressPanelViewModel;
@end
