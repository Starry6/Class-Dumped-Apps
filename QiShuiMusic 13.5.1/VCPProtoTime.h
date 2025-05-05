@interface VCPProtoTime : PBCodable
@property (nonatomic) q value;
@property (nonatomic) NSInteger timescale;
@property (nonatomic) I flags;
@property (nonatomic) q epoch;
- (void)setEpoch:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (long long)epoch;
- (void)mergeFrom:;
- (void)setValue:;
- (BOOL)readFrom:;
- (id)description;
- (long long)value;
- (void)setFlags:;
- (id)dictionaryRepresentation;
- (void)setTimescale:;
- (int)timescale;
- (unsigned int)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)timeValue;
+ (id)timeWithCMTime:;
@end
