@interface AWEPlayInteractionBatManElement : AWEPlayInteractionLeftElement
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:;
- (void)showBatManEnterenceIfNeeded:;
- (void)hideBatManEntranceIfNeeded;
- (void)batManEntranceWillShow:;
- (void)batManEntranceCustomNormalEntrance:normalEntranceView:;
- (void)reset;
+ (BOOL)shouldActiveWithModel:;
@end
