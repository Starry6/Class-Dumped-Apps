@interface BMWorkoutEvent : BMEventBase
@property (nonatomic) BOOL starting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) I dataVersion;
- (id)initWithProtoData:;
- (void)setStarting:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (BOOL)isStarting;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithStarting:;
+ (id)eventWithData:dataVersion:;
@end
