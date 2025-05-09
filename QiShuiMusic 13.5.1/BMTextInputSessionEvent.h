@interface BMTextInputSessionEvent : BMEventBase
@property (nonatomic) NSDate startDate;
@property (nonatomic) double duration;
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) NSString bundleID;
@property (nonatomic) Q sessionType;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (unsigned long long)sessionType;
- (id)dateInterval;
- (id)startDate;
- (void)setDateInterval:;
- (id)proto;
- (void)setStartDate:;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (void)setDuration:;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)bundleID;
- (double)duration;
- (BOOL)isEqual:;
- (id)initWithDateInterval:bundleID:sessionType:;
- (void)setSessionType:;
- (void)setBundleID:;
+ (id)eventWithData:dataVersion:;
@end
