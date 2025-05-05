@interface AWDSOSAutomaticNewtonEnabled : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasAutomaticNewtonEnabled;
@property (nonatomic) BOOL automaticNewtonEnabled;
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
- (void)setAutomaticNewtonEnabled:;
- (void)setHasAutomaticNewtonEnabled:;
- (BOOL)hasAutomaticNewtonEnabled;
- (BOOL)automaticNewtonEnabled;
@end
