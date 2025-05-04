@interface AWELeftSideBarEntranceCommonBubbleTask : NSObject
@property (nonatomic) AWEHPChannelBubbleTask holdingTask;
@property (nonatomic) AWELeftSideBarBasePresenter presenter;
@property (nonatomic) AWELeftSideBarAmbienceObject ambienceObject;
@property (nonatomic) BOOL isBusiness;
- (void)setHoldingTask:;
- (id)holdingTask;
- (id)ambienceObject;
- (void)setAmbienceObject:;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
- (BOOL)isBusiness;
- (void)setIsBusiness:;
@end
