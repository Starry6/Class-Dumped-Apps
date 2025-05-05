@interface IESSaaSCalcWatchHelperData : NSObject
@property (nonatomic) NSString roomID;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double endTime;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (void)setDuration:;
- (double)endTime;
- (void).cxx_destruct;
- (double)duration;
- (id)roomID;
- (void)setRoomID:;
@end
