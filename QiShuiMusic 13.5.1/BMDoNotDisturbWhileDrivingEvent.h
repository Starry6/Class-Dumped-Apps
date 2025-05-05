@interface BMDoNotDisturbWhileDrivingEvent : BMEventBase
@property (nonatomic) BOOL isStart;
@property (nonatomic) Q reason;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)init;
- (id)proto;
- (id)json;
- (id)encodeAsProto;
- (unsigned long long)reason;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (BOOL)isStart;
- (id)description;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (id)initWithReason:isStart:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
