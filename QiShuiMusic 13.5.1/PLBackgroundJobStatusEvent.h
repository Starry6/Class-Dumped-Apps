@interface PLBackgroundJobStatusEvent : NSObject
@property (nonatomic) NSDate eventTimestamp;
@property (nonatomic) NSString statusDump;
- (void).cxx_destruct;
- (id)statusDump;
- (id)eventTimestamp;
- (void)setEventTimestamp:;
@end
