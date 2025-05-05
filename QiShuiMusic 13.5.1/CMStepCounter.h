@interface CMStepCounter : NSObject
@property (nonatomic) CMStepCounterProxy stepcounterProxy;
@property (nonatomic) BOOL enabled;
- (id)init;
- (void)dealloc;
- (BOOL)enabled;
- (void)setEnabled:;
- (void)queryStepCountStartingFrom:to:toQueue:withHandler:;
- (void)startStepCountingUpdatesToQueue:updateOn:withHandler:;
- (void)stopStepCountingUpdates;
- (void)getTotalCountToQueue:withHandler:;
- (void)deleteHistory;
- (id)stepcounterProxy;
+ (BOOL)isStepCountingAvailable;
@end
