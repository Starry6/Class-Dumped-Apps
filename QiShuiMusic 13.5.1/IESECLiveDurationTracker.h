@interface IESECLiveDurationTracker : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSDate start;
@property (nonatomic) IESECLiveTracker tracker;
@property (nonatomic) IESECLiveGoodsModel goods;
@property (nonatomic) BOOL shouldTrackWhenAppEnterBackground;
@property (nonatomic) double currentDuration;
- (void)endTrack;
- (id)goods;
- (void)handleAPPDidEnterBackground:;
- (void)handleAPPWillEnterForeground:;
- (void)setGoods:;
- (void)setShouldTrackWhenAppEnterBackground:;
- (BOOL)shouldTrackWhenAppEnterBackground;
- (void)startTrack;
- (void)setTracker:;
- (void)setStart:;
- (void)setEvent:;
- (void)dealloc;
- (id)event;
- (id)tracker;
- (id)start;
- (void).cxx_destruct;
- (id)initWithEvent:;
- (double)currentDuration;
@end
