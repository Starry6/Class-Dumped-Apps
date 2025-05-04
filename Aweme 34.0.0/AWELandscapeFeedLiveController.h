@interface AWELandscapeFeedLiveController : AWELandscapeFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordLandscapeData;
- (void)setupLiveModelFilter;
- (void)trackExitLiveRoom:byAuto:;
- (void)updatePortraitDataWithAwemeModel:;
- (void)exitLandscapeFeed;
- (void)liveRoomShouldSrollEnable:;
- (void)exitLiveRoomWithAwemeModel:byAuto:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewDidAppear:;
@end
