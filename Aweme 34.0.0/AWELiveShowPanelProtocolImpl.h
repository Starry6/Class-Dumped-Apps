@interface AWELiveShowPanelProtocolImpl : NSObject
@property (nonatomic) UINavigationController panelNavigationController;
@property (nonatomic) UINavigationController payLiveNavigationController;
@property (nonatomic) DUXPartialSheet payLivePartialSheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)partialSheetDidDismiss:;
- (void)iesHYControllerDidDismiss:;
- (void)setPayLiveNavigationController:;
- (void)setPayLivePartialSheet:;
- (id)payLivePartialSheet;
- (id)payLiveNavigationController;
- (id)panelNavigationController;
- (void)openPayLiveTicketPanelWithWebviewUrl:videoId:;
- (void)setPanelNavigationController:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
