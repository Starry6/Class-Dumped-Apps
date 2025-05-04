@interface AWETrackerAspectApplyRecord : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSArray aspects;
@property (nonatomic) AWETrackerDictionary trackerContext;
@property (nonatomic) NSDictionary applyResult;
@property (nonatomic) double applyTimeStamp;
@property (nonatomic) double applyDuration;
- (void)setTrackerContext:;
- (id)trackerContext;
- (id)applyResult;
- (id)initWithEvent:aspects:trackerContext:applyResult:applyTimeStamp:applyDuration:;
- (id)aspects;
- (void)setAspects:;
- (void)setApplyResult:;
- (double)applyTimeStamp;
- (void)setApplyTimeStamp:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (double)applyDuration;
- (void)setApplyDuration:;
+ (id)recordWithEvent:aspects:trackerContext:applyResult:applyTimeStamp:applyDuration:;
@end
