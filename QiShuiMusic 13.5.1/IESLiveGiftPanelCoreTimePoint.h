@interface IESLiveGiftPanelCoreTimePoint : NSObject
@property (nonatomic) double stayRoomDuration;
@property (nonatomic) double panelStartShowingTime;
@property (nonatomic) double panelRenderFinishTime;
@property (nonatomic) double firstImageRenderFinishTime;
@property (nonatomic) double defaultSelectTime;
- (double)defaultSelectTime;
- (double)firstImageRenderFinishTime;
- (double)panelRenderFinishTime;
- (double)panelStartShowingTime;
- (void)setDefaultSelectTime:;
- (void)setFirstImageRenderFinishTime:;
- (void)setPanelRenderFinishTime:;
- (void)setPanelStartShowingTime:;
- (void)setStayRoomDuration:;
- (double)stayRoomDuration;
@end
