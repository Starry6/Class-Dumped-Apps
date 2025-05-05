@interface BMScreenRecordingEvent : BMEventBase
@property (nonatomic) BOOL isStart;
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
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (BOOL)isStart;
- (id)description;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (id)initWithIsStart:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
