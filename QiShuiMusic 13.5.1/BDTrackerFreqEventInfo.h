@interface BDTrackerFreqEventInfo : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) double timestamp;
- (void)setEvent:;
- (id)event;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
+ (id)infoWithEvent:;
@end
