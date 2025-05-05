@interface AWDWifiP2PAirplayHistogramBin : PBCodable
@property (nonatomic) BOOL hasBinStart;
@property (nonatomic) NSInteger binStart;
@property (nonatomic) BOOL hasBinEnd;
@property (nonatomic) NSInteger binEnd;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) I count;
- (void)setCount:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
- (int)binStart;
- (int)binEnd;
- (void)setBinStart:;
- (void)setHasBinStart:;
- (BOOL)hasBinStart;
- (void)setBinEnd:;
- (void)setHasBinEnd:;
- (BOOL)hasBinEnd;
@end
