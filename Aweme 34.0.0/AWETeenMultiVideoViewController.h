@interface AWETeenMultiVideoViewController : AWETeenFeedBaseViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (void)handleConnectionChanged:;
- (void)windowDidResignKeyNotification:;
- (void)windowDidBecomeKeyNotification:;
- (id)initWithDataController:initialIndex:vcType:extra:;
- (void)applicationWillResignActive:;
- (void)applicationDidBecomeActive:;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:;
- (void)viewDidAppear:;
@end
