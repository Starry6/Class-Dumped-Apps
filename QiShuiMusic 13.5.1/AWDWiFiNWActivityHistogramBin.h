@interface AWDWiFiNWActivityHistogramBin : PBCodable
@property (nonatomic) BOOL hasBin;
@property (nonatomic) NSString bin;
@property (nonatomic) BOOL hasHits;
@property (nonatomic) Q hits;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)hits;
- (void)setHits:;
- (BOOL)hasBin;
- (void)setHasHits:;
- (BOOL)hasHits;
- (id)bin;
- (void)setBin:;
@end
