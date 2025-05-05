@interface NRPBDevicePropertyDiffType : PBCodable
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) NSInteger changeType;
@property (nonatomic) BOOL hasDiff;
@property (nonatomic) NRPBDevicePropertyDiff diff;
- (int)changeType;
- (void)setHasChangeType:;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasChangeType;
- (void)copyTo:;
- (void)setChangeType:;
- (void)mergeFrom:;
- (int)StringAsChangeType:;
- (id)diff;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)changeTypeAsString:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasDiff;
- (void)setDiff:;
@end
