@interface IESLiveBatteryMonitor : NSObject
@property (nonatomic) float cursorLevel;
@property (nonatomic) double cursorTime;
@property (nonatomic) float costSummary;
@property (nonatomic) float levelDeltaSummary;
- (void)setCursorLevel:;
- (void)setCostSummary:;
- (float)costSummary;
- (float)cursorLevel;
- (double)cursorTime;
- (id)levelChangePer100Seconds;
- (float)levelDeltaSummary;
- (void)recordBatteryChangeIfNeed;
- (void)setCursorTime:;
- (void)setLevelDeltaSummary:;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)reset;
@end
