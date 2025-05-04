@interface AWEPlayInteractionVideoCoverController : AWEPlayInteractionBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showCoverEvaluatePanelFromDataCenter;
- (void)coverEvaluatePanelDidShowWithPanelHeightRate:;
- (void)coverEvaluatePanelDidDismiss;
- (void)coverEvaluatePanelDragOffset:panelHeightRate:;
@end
