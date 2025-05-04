@interface AWELeftSideBarItemObject : NSObject
@property (nonatomic) <AWEHPListKitItemControllerProtocol> itemController;
@property (nonatomic) AWELeftSideBarBasePresenter presenter;
@property (nonatomic) AWEHPChannelBadgeTask badgeTask;
@property (nonatomic) AWEHPChannelBadgeTask tempBadgeTask;
@property (nonatomic) NSString badgeVersion;
@property (nonatomic) q loadCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemController;
- (void)setItemController:;
- (id)initWithItemController:;
- (id)badgeTask;
- (void)setBadgeTask:;
- (id)tempBadgeTask;
- (void)setTempBadgeTask:;
- (id)badgeVersion;
- (void)setBadgeVersion:;
- (id)presenter;
- (void).cxx_destruct;
- (long long)loadCount;
- (void)setLoadCount:;
@end
