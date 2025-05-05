@interface IESLiveSaaSECommerceDurationTrack : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSDate start;
@property (nonatomic) @? trackerProvider;
@property (nonatomic) IESLiveSaaSGoodsModel goods;
@property (nonatomic) BOOL shouldTrackWhenAppEnterBackground;
@property (nonatomic) double currentDuration;
- (id)trackerProvider;
- (void)endTrack;
- (id)goods;
- (void)handleAPPDidEnterBackground:;
- (void)handleAPPWillEnterForeground:;
- (void)setGoods:;
- (void)setShouldTrackWhenAppEnterBackground:;
- (void)setTrackerProvider:;
- (BOOL)shouldTrackWhenAppEnterBackground;
- (void)startTrack;
- (void)setStart:;
- (void)setEvent:;
- (void)dealloc;
- (id)event;
- (id)start;
- (void).cxx_destruct;
- (id)initWithEvent:;
- (double)currentDuration;
@end
