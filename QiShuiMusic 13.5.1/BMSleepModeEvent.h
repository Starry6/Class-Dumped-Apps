@interface BMSleepModeEvent : BMEventBase
@property (nonatomic) Q sleepModeState;
@property (nonatomic) Q sleepModeChangeReason;
@property (nonatomic) NSDate expectedEndDate;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)sleepModeState;
- (id)initWithProtoData:;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (id)initWithSleepModeState:;
- (void).cxx_destruct;
- (id)expectedEndDate;
- (id)description;
- (id)serialize;
- (id)initWithSleepModeState:sleepModeChangeReason:expectedEndDate:;
- (unsigned long long)sleepModeChangeReason;
- (BOOL)isEqual:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
