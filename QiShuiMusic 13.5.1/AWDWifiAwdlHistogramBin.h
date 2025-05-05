@interface AWDWifiAwdlHistogramBin : PBCodable
@property (nonatomic) BOOL hasBinStart;
@property (nonatomic) double binStart;
@property (nonatomic) BOOL hasBinEnd;
@property (nonatomic) double binEnd;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
- (BOOL)hasValue;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)mergeFrom:;
- (void)setValue:;
- (BOOL)readFrom:;
- (id)description;
- (double)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)binStart;
- (double)binEnd;
- (void)setBinStart:;
- (void)setHasBinStart:;
- (BOOL)hasBinStart;
- (void)setBinEnd:;
- (void)setHasBinEnd:;
- (BOOL)hasBinEnd;
@end
