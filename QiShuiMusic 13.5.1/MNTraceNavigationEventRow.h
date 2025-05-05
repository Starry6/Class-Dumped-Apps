@interface MNTraceNavigationEventRow : NSObject
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) NSDate date;
@property (nonatomic) Q locationID;
@property (nonatomic) q eventType;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString eventDescription;
@property (nonatomic) NSString speakableEventDescription;
- (void)setRelativeTimestamp:;
- (void)setLocationID:;
- (double)relativeTimestamp;
- (long long)eventType;
- (void)setEventType:;
- (id)date;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (unsigned long long)locationID;
- (void)setDate:;
- (id)description;
- (id)eventDescription;
- (void)setEventDescription:;
- (id)speakableEventDescription;
- (void)setSpeakableEventDescription:;
@end
