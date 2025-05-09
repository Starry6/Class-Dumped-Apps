@interface AWDWiFiNWActivityImpedingFunctions : PBCodable
@property (nonatomic) NSMutableArray cTLMIndexs;
@property (nonatomic) NSMutableArray txPowerBackoffDBs;
@property (nonatomic) NSMutableArray txDutyCyclePcts;
@property (nonatomic) NSMutableArray cTLMIndex1s;
@property (nonatomic) NSMutableArray txPowerBackoffDB1s;
@property (nonatomic) NSMutableArray txDutyCyclePct1s;
@property (nonatomic) BOOL hasTxduty0;
@property (nonatomic) I txduty0;
@property (nonatomic) BOOL hasTxduty1;
@property (nonatomic) I txduty1;
@property (nonatomic) BOOL hasTxpowerbackoff0;
@property (nonatomic) I txpowerbackoff0;
@property (nonatomic) BOOL hasTxpowerbackoff1;
@property (nonatomic) I txpowerbackoff1;
@property (nonatomic) BOOL hasActivechains0;
@property (nonatomic) I activechains0;
@property (nonatomic) BOOL hasActivechains1;
@property (nonatomic) I activechains1;
@property (nonatomic) BOOL hasTemp0;
@property (nonatomic) I temp0;
@property (nonatomic) BOOL hasTemp1;
@property (nonatomic) I temp1;
@property (nonatomic) BOOL hasVoltage0;
@property (nonatomic) I voltage0;
@property (nonatomic) BOOL hasVoltage1;
@property (nonatomic) I voltage1;
@property (nonatomic) BOOL hasPpm0;
@property (nonatomic) I ppm0;
@property (nonatomic) BOOL hasPpm1;
@property (nonatomic) I ppm1;
@property (nonatomic) BOOL hasCtlmid0;
@property (nonatomic) I ctlmid0;
@property (nonatomic) BOOL hasCtlmid1;
@property (nonatomic) I ctlmid1;
@property (nonatomic) BOOL hasTvpmindex0;
@property (nonatomic) I tvpmindex0;
@property (nonatomic) BOOL hasTvpmindex1;
@property (nonatomic) I tvpmindex1;
@property (nonatomic) BOOL hasRc1Request;
@property (nonatomic) I rc1Request;
@property (nonatomic) BOOL hasRc1Duration;
@property (nonatomic) I rc1Duration;
@property (nonatomic) BOOL hasRc1wlanCrit;
@property (nonatomic) I rc1wlanCrit;
@property (nonatomic) BOOL hasRc1wlanCritDuration;
@property (nonatomic) I rc1wlanCritDuration;
@property (nonatomic) BOOL hasRc2Request;
@property (nonatomic) I rc2Request;
@property (nonatomic) BOOL hasRc2Duration;
@property (nonatomic) I rc2Duration;
@property (nonatomic) BOOL hasRc2Grant;
@property (nonatomic) I rc2Grant;
@property (nonatomic) BOOL hasRc2LongGrant;
@property (nonatomic) I rc2LongGrant;
@property (nonatomic) BOOL hasRc2cts2a;
@property (nonatomic) I rc2cts2a;
@property (nonatomic) BOOL hasSdbtdm;
@property (nonatomic) AWDWiFiTDM sdbtdm;
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
- (void)clearCTLMIndexs;
- (void)addCTLMIndex:;
- (unsigned long long)cTLMIndexsCount;
- (id)cTLMIndexAtIndex:;
- (void)clearTxPowerBackoffDBs;
- (void)addTxPowerBackoffDB:;
- (unsigned long long)txPowerBackoffDBsCount;
- (id)txPowerBackoffDBAtIndex:;
- (void)clearTxDutyCyclePcts;
- (void)addTxDutyCyclePct:;
- (unsigned long long)txDutyCyclePctsCount;
- (id)txDutyCyclePctAtIndex:;
- (void)clearCTLMIndex1s;
- (void)addCTLMIndex1:;
- (unsigned long long)cTLMIndex1sCount;
- (id)cTLMIndex1AtIndex:;
- (void)clearTxPowerBackoffDB1s;
- (void)addTxPowerBackoffDB1:;
- (unsigned long long)txPowerBackoffDB1sCount;
- (id)txPowerBackoffDB1AtIndex:;
- (void)clearTxDutyCyclePct1s;
- (void)addTxDutyCyclePct1:;
- (unsigned long long)txDutyCyclePct1sCount;
- (id)txDutyCyclePct1AtIndex:;
- (void)setTxduty0:;
- (void)setHasTxduty0:;
- (BOOL)hasTxduty0;
- (void)setTxduty1:;
- (void)setHasTxduty1:;
- (BOOL)hasTxduty1;
- (void)setTxpowerbackoff0:;
- (void)setHasTxpowerbackoff0:;
- (BOOL)hasTxpowerbackoff0;
- (void)setTxpowerbackoff1:;
- (void)setHasTxpowerbackoff1:;
- (BOOL)hasTxpowerbackoff1;
- (void)setActivechains0:;
- (void)setHasActivechains0:;
- (BOOL)hasActivechains0;
- (void)setActivechains1:;
- (void)setHasActivechains1:;
- (BOOL)hasActivechains1;
- (void)setTemp0:;
- (void)setHasTemp0:;
- (BOOL)hasTemp0;
- (void)setTemp1:;
- (void)setHasTemp1:;
- (BOOL)hasTemp1;
- (void)setVoltage0:;
- (void)setHasVoltage0:;
- (BOOL)hasVoltage0;
- (void)setVoltage1:;
- (void)setHasVoltage1:;
- (BOOL)hasVoltage1;
- (void)setPpm0:;
- (void)setHasPpm0:;
- (BOOL)hasPpm0;
- (void)setPpm1:;
- (void)setHasPpm1:;
- (BOOL)hasPpm1;
- (void)setCtlmid0:;
- (void)setHasCtlmid0:;
- (BOOL)hasCtlmid0;
- (void)setCtlmid1:;
- (void)setHasCtlmid1:;
- (BOOL)hasCtlmid1;
- (void)setTvpmindex0:;
- (void)setHasTvpmindex0:;
- (BOOL)hasTvpmindex0;
- (void)setTvpmindex1:;
- (void)setHasTvpmindex1:;
- (BOOL)hasTvpmindex1;
- (void)setRc1Request:;
- (void)setHasRc1Request:;
- (BOOL)hasRc1Request;
- (void)setRc1Duration:;
- (void)setHasRc1Duration:;
- (BOOL)hasRc1Duration;
- (void)setRc1wlanCrit:;
- (void)setHasRc1wlanCrit:;
- (BOOL)hasRc1wlanCrit;
- (void)setRc1wlanCritDuration:;
- (void)setHasRc1wlanCritDuration:;
- (BOOL)hasRc1wlanCritDuration;
- (void)setRc2Request:;
- (void)setHasRc2Request:;
- (BOOL)hasRc2Request;
- (void)setRc2Duration:;
- (void)setHasRc2Duration:;
- (BOOL)hasRc2Duration;
- (void)setRc2Grant:;
- (void)setHasRc2Grant:;
- (BOOL)hasRc2Grant;
- (void)setRc2LongGrant:;
- (void)setHasRc2LongGrant:;
- (BOOL)hasRc2LongGrant;
- (void)setRc2cts2a:;
- (void)setHasRc2cts2a:;
- (BOOL)hasRc2cts2a;
- (BOOL)hasSdbtdm;
- (id)cTLMIndexs;
- (void)setCTLMIndexs:;
- (id)txPowerBackoffDBs;
- (void)setTxPowerBackoffDBs:;
- (id)txDutyCyclePcts;
- (void)setTxDutyCyclePcts:;
- (id)cTLMIndex1s;
- (void)setCTLMIndex1s:;
- (id)txPowerBackoffDB1s;
- (void)setTxPowerBackoffDB1s:;
- (id)txDutyCyclePct1s;
- (void)setTxDutyCyclePct1s:;
- (unsigned int)txduty0;
- (unsigned int)txduty1;
- (unsigned int)txpowerbackoff0;
- (unsigned int)txpowerbackoff1;
- (unsigned int)activechains0;
- (unsigned int)activechains1;
- (unsigned int)temp0;
- (unsigned int)temp1;
- (unsigned int)voltage0;
- (unsigned int)voltage1;
- (unsigned int)ppm0;
- (unsigned int)ppm1;
- (unsigned int)ctlmid0;
- (unsigned int)ctlmid1;
- (unsigned int)tvpmindex0;
- (unsigned int)tvpmindex1;
- (unsigned int)rc1Request;
- (unsigned int)rc1Duration;
- (unsigned int)rc1wlanCrit;
- (unsigned int)rc1wlanCritDuration;
- (unsigned int)rc2Request;
- (unsigned int)rc2Duration;
- (unsigned int)rc2Grant;
- (unsigned int)rc2LongGrant;
- (unsigned int)rc2cts2a;
- (id)sdbtdm;
- (void)setSdbtdm:;
+ (Class)cTLMIndexType;
+ (Class)txPowerBackoffDBType;
+ (Class)txDutyCyclePctType;
+ (Class)cTLMIndex1Type;
+ (Class)txPowerBackoffDB1Type;
+ (Class)txDutyCyclePct1Type;
@end
