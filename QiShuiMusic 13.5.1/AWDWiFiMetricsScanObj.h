@interface AWDWiFiMetricsScanObj : PBCodable
@property (nonatomic) BOOL hasScanType;
@property (nonatomic) I scanType;
@property (nonatomic) BOOL hasNumScans;
@property (nonatomic) I numScans;
@property (nonatomic) BOOL hasDurScans;
@property (nonatomic) I durScans;
- (void)writeTo:;
- (unsigned int)scanType;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setScanType:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasScanType:;
- (BOOL)hasScanType;
- (void)setNumScans:;
- (void)setHasNumScans:;
- (BOOL)hasNumScans;
- (void)setDurScans:;
- (void)setHasDurScans:;
- (BOOL)hasDurScans;
- (unsigned int)numScans;
- (unsigned int)durScans;
@end
