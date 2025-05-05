@interface AWDSOSAutomaticCallCountdownEnabled : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasAutomaticCallCountdownEnabled;
@property (nonatomic) BOOL automaticCallCountdownEnabled;
- (void)setAutomaticCallCountdownEnabled:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)automaticCallCountdownEnabled;
- (void)setHasAutomaticCallCountdownEnabled:;
- (BOOL)hasAutomaticCallCountdownEnabled;
@end
