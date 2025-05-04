@interface AWELeftSideBarEntranceInteractiveAnimationTask : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) AWELeftSideBarBasePresenter presenter;
@property (nonatomic) AWELeftSideBarAmbienceObject ambienceObject;
@property (nonatomic) AWELeftSideBarEntranceInteractiveAnimationView animationView;
@property (nonatomic) AWEHomePageBubbleTask holdingTask;
@property (nonatomic) double showTime;
@property (nonatomic) NSString scrollBusinessId;
@property (nonatomic) BOOL needScroll;
@property (nonatomic) BOOL hasScroll;
- (double)showTime;
- (void)setShowTime:;
- (void)setHoldingTask:;
- (id)holdingTask;
- (id)ambienceObject;
- (void)setAmbienceObject:;
- (id)scrollBusinessId;
- (void)setScrollBusinessId:;
- (BOOL)needScroll;
- (void)setNeedScroll:;
- (id)presenter;
- (void)setPresenter:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:;
- (BOOL)hasScroll;
- (void)setHasScroll:;
@end
