@interface AWEPublishAndAdvanceSettingsPopupLifeCycleDispatcher : NSObject
@property (nonatomic) AWEPostPageElementCenter elementCenter;
@property (nonatomic) BOOL isViewDidLoaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)elementAppear;
- (void)setElementCenter:;
- (id)elementCenter;
- (void)audioSessionReset;
- (BOOL)isViewDidLoaded;
- (void)setIsViewDidLoaded:;
- (void)cleanUp;
- (void)viewWillDisappear:;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
@end
