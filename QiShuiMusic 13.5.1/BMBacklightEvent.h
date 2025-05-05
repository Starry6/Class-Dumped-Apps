@interface BMBacklightEvent : BMEventBase
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) Q backlightLevel;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)init;
- (id)proto;
- (unsigned long long)backlightLevel;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (id)description;
- (id)serialize;
- (id)initWithAbsoluteTimestamp:backlightLevel:;
- (BOOL)isEqual:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
