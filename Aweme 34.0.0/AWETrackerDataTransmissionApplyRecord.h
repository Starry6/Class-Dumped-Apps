@interface AWETrackerDataTransmissionApplyRecord : NSObject
@property (nonatomic) AWETrackerDataTransmissionChain chain;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary applyResult;
@property (nonatomic) double applyTimeStamp;
@property (nonatomic) double applyDuration;
- (void)setChain:;
- (id)applyResult;
- (void)setApplyResult:;
- (double)applyTimeStamp;
- (void)setApplyTimeStamp:;
- (id)initWithEvent:chain:applyResult:applyDuration:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)chain;
- (id)eventName;
- (double)applyDuration;
- (void)setApplyDuration:;
+ (id)recordWithEvent:chain:applyResult:applyDuration:;
@end
