@interface BMScreenSharingEvent : BMEventBase
@property (nonatomic) BOOL isStart;
@property (nonatomic) Q type;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (BOOL)isStart;
- (unsigned long long)type;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithIsStart:;
- (id)initWithIsStart:type:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
