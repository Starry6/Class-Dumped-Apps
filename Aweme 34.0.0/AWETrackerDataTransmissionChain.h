@interface AWETrackerDataTransmissionChain : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSArray transmissionObjs;
@property (nonatomic) double applyTimeStamp;
- (id)transmissionObjs;
- (double)applyTimeStamp;
- (void)setApplyTimeStamp:;
- (id)initWithEvent:array:;
- (void)setTransmissionObjs:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (id)copyWithZone:;
@end
