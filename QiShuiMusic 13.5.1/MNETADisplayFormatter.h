@interface MNETADisplayFormatter : NSObject
@property (nonatomic) <MNETADisplayFormatterDelegate> delegate;
@property (nonatomic) double remainingTimeToEndOfRoute;
@property (nonatomic) double remainingTimeToEndOfLeg;
@property (nonatomic) double displayRemainingTimeToEndOfLeg;
@property (nonatomic) NSDate displayETAToEndOfLeg;
@property (nonatomic) double displayRemainingTimeToEndOfRoute;
@property (nonatomic) NSDate displayETAToEndOfRoute;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_updateTimerFired;
- (id)initWithTimeZone:;
- (void)setRemainingTimeToEndOfRoute:;
- (void)setRemainingTimeToEndOfLeg:;
- (void)_updateDisplayETA;
- (void)_scheduleUpdateTimer;
- (double)_displayTimeIntervalForTimeInterval:;
- (id)_displayDateWithRemainingTime:;
- (double)remainingTimeToEndOfRoute;
- (double)remainingTimeToEndOfLeg;
- (double)displayRemainingTimeToEndOfLeg;
- (id)displayETAToEndOfLeg;
- (double)displayRemainingTimeToEndOfRoute;
- (id)displayETAToEndOfRoute;
@end
