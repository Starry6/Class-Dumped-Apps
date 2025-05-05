@interface IESECSliceXTimeCenter : NSObject
@property (nonatomic) Q initialTimestamp;
@property (nonatomic) Q initialCurrentAbsoluteTimestamp;
@property (nonatomic) IESECSliceXTimer timer;
@property (nonatomic) Q currentTimestamp;
@property (nonatomic) NSHashTable timerListeners;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)initialCurrentAbsoluteTimestamp;
- (void)addTimerListener:;
- (id)init_private;
- (unsigned long long)initialTimestamp;
- (void)notifyTimerListeners;
- (void)removeTimerListener:;
- (void)setInitialCurrentAbsoluteTimestamp:;
- (void)setInitialTimestamp:;
- (void)setTimerListeners:;
- (void)timeIsUp:;
- (id)timerListeners;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (unsigned long long)currentTimestamp;
- (void)setCurrentTimestamp:;
+ (id)allocWithZone:;
+ (id)shared;
@end
