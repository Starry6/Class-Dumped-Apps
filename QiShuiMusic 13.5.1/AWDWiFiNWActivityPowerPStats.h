@interface AWDWiFiNWActivityPowerPStats : PBCodable
@property (nonatomic) BOOL hasKRadioPhyReportTxDur;
@property (nonatomic) Q kRadioPhyReportTxDur;
@property (nonatomic) BOOL hasKRadioPhyReportRxDur;
@property (nonatomic) Q kRadioPhyReportRxDur;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setKRadioPhyReportTxDur:;
- (void)setHasKRadioPhyReportTxDur:;
- (BOOL)hasKRadioPhyReportTxDur;
- (void)setKRadioPhyReportRxDur:;
- (void)setHasKRadioPhyReportRxDur:;
- (BOOL)hasKRadioPhyReportRxDur;
- (unsigned long long)kRadioPhyReportTxDur;
- (unsigned long long)kRadioPhyReportRxDur;
@end
