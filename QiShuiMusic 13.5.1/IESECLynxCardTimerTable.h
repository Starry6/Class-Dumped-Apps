@interface IESECLynxCardTimerTable : NSObject
@property (nonatomic) NSMapTable timerMap;
- (void)setTimerMap:;
- (id)timerMap;
- (void).cxx_destruct;
+ (id)sharedTimerTable;
@end
