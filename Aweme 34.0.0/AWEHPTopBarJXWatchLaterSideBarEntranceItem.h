@interface AWEHPTopBarJXWatchLaterSideBarEntranceItem : AWEHPTopBarBaseEntranceItem
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)entranceType;
- (id)entranceView;
- (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:;
- (id)aAWEJXWatchLaterSidebarAdapter;
- (double)awe_DUXFloat:;
- (id)entranceSize;
- (void)loadEntranceView;
- (void)topBarLeftContainerHideChange:;
- (void)topBarLeftContainerAlphaChange:;
- (void)entranceWillAppear;
- (void)entranceDidAppear;
- (void)entranceWillDisappear;
- (void)entranceDidDisappear;
+ (BOOL)entranceShouldShow;
+ (Class)aAWEJXWatchLaterSidebarAdapterClass;
+ (id)entranceBizID;
@end
