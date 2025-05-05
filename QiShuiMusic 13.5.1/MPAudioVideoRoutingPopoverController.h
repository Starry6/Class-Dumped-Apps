@interface MPAudioVideoRoutingPopoverController : UIPopoverController
@property (nonatomic) BOOL mirroringOnly;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)routingController;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)initWithContentViewController:;
- (void)routingViewController:didPickRoute:;
- (void)routingViewControllerDidUpdateContents:;
- (id)initWithType:includeMirroring:;
- (void)setMirroringOnly:;
- (BOOL)mirroringOnly;
@end
