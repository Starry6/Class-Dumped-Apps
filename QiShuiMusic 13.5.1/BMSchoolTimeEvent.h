@interface BMSchoolTimeEvent : BMEventBase
@property (nonatomic) BOOL starting;
@property (nonatomic) Q reason;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (void)setStarting:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned long long)reason;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (void)setReason:;
- (id)initWithProto:;
- (BOOL)isStarting;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithStarting:;
- (id)initWithStarting:reason:;
+ (id)eventWithData:dataVersion:;
@end
