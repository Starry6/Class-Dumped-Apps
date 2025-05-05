@interface BMMindfulnessSessionEvent : BMEventBase
@property (nonatomic) Q sessionType;
@property (nonatomic) Q stateType;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (unsigned long long)sessionType;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (void)setStateType:;
- (id)initWithProto:;
- (unsigned long long)stateType;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (void)setSessionType:;
- (id)initWithSessionType:stateType:;
+ (id)eventWithData:dataVersion:;
@end
