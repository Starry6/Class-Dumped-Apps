@interface BMPBBacklightEvent : PBCodable
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasBacklightLevel;
@property (nonatomic) Q backlightLevel;
- (void)setAbsoluteTimestamp:;
- (void)setHasAbsoluteTimestamp:;
- (void)setHasBacklightLevel:;
- (unsigned long long)backlightLevel;
- (BOOL)hasAbsoluteTimestamp;
- (void)writeTo:;
- (double)absoluteTimestamp;
- (void)setBacklightLevel:;
- (unsigned long long)hash;
- (BOOL)hasBacklightLevel;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
