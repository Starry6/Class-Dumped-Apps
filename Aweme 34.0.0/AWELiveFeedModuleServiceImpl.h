@interface AWELiveFeedModuleServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)liveClosePageCanLandingTabLiveItem;
- (BOOL)liveRoomCanLandingTabLiveItem;
- (void)liveRoomSwitchTabLiveItem:enterMethod:;
- (void)liveRoomSwitchTabLiveItem:enterMethod:params:;
- (void)liveClosePageSwitchTabLiveItem:enterMethod:;
- (void)liveClosePageSwitchTabLiveItem:enterMethod:params:;
- (BOOL)canLandingTabLiveItem:;
- (void)switchTabLiveItem:;
- (void)liveInnerFeed:willPopToVC:;
@end
