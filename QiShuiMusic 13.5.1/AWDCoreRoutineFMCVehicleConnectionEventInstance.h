@interface AWDCoreRoutineFMCVehicleConnectionEventInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSInteger value;
- (BOOL)hasValue;
- (void)writeTo:;
- (int)eventType;
- (void)setEventType:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setValue:;
- (void)setTimestamp:;
- (void)setHasEventType:;
- (BOOL)hasEventType;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (int)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
