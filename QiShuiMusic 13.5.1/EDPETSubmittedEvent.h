@interface EDPETSubmittedEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasTimezoneOffset;
@property (nonatomic) NSInteger timezoneOffset;
- (void)setTimezoneOffset:;
- (int)timezoneOffset;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)hasTimezoneOffset;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setHasTimezoneOffset:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
