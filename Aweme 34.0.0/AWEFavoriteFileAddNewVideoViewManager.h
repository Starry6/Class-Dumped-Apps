@interface AWEFavoriteFileAddNewVideoViewManager : NSObject
@property (nonatomic) AWEFavoriteFileAddNewVideoViewController addNewVideoViewController;
@property (nonatomic) UIViewController topViewController;
@property (nonatomic) NSInteger hideBottomBarNumber;
@property (nonatomic) BOOL isHideBottomBar;
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAddNewVideoViewController:;
- (id)addNewVideoViewController;
- (void)setIsHideBottomBar:;
- (int)hideBottomBarNumber;
- (void)setHideBottomBarNumber:;
- (BOOL)isHideBottomBar;
- (void)showAddNewVideoView;
- (id)topViewController;
- (void).cxx_destruct;
- (id)sheet;
- (void)setTopViewController:;
- (void)setSheet:;
+ (id)shareInstance;
@end
