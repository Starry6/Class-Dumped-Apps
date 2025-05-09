@interface BMSiriExecutionEvent : BMEventBase
@property (nonatomic) NSString taskId;
@property (nonatomic) Q taskStep;
@property (nonatomic) NSString statusReason;
@property (nonatomic) NSString slotValue;
@property (nonatomic) NSString intentName;
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString interactionId;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)appBundleId;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)taskId;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithTaskID:taskStep:statusReason:slotValue:intentName:;
- (id)initWithTaskID:taskStep:statusReason:slotValue:intentName:appBundleId:interactionId:;
- (id)initWithTaskID:taskStep:statusReason:slotValue:intentName:appBundleId:interactionId:absoluteTimestamp:;
- (unsigned long long)taskStep;
- (id)statusReason;
- (id)slotValue;
- (id)intentName;
- (id)interactionId;
+ (id)eventWithData:dataVersion:;
@end
