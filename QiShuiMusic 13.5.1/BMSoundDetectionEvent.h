@interface BMSoundDetectionEvent : BMEventBase
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) NSString type;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithProto:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithAbsoluteTimestamp:type:customName:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
