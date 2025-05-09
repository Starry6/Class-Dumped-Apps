@interface AWDWiFiMetric11axLinkChangeData : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) Q rssiHistorysCount;
@property (nonatomic) ^i rssiHistorys;
@property (nonatomic) BOOL hasIsLinkUp;
@property (nonatomic) BOOL isLinkUp;
@property (nonatomic) BOOL hasIsInVol;
@property (nonatomic) BOOL isInVol;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) I reason;
@property (nonatomic) BOOL hasSubreason;
@property (nonatomic) I subreason;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) I channel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) I channelWidth;
@property (nonatomic) BOOL hasPhyMode;
@property (nonatomic) I phyMode;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) I flags;
@property (nonatomic) BOOL hasOui;
@property (nonatomic) NSData oui;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) I securityType;
@property (nonatomic) BOOL hasWpaProtocol;
@property (nonatomic) I wpaProtocol;
@property (nonatomic) BOOL hasMcastCipher;
@property (nonatomic) I mcastCipher;
@property (nonatomic) BOOL hasUcastCipher;
@property (nonatomic) I ucastCipher;
@property (nonatomic) BOOL hasAkmSuites;
@property (nonatomic) I akmSuites;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) I capabilities;
@property (nonatomic) BOOL hasEnhancedSecurityType;
@property (nonatomic) I enhancedSecurityType;
@property (nonatomic) BOOL hasHtInfo;
@property (nonatomic) I htInfo;
@property (nonatomic) BOOL hasHtExtended;
@property (nonatomic) I htExtended;
@property (nonatomic) BOOL hasHtTxBf;
@property (nonatomic) I htTxBf;
@property (nonatomic) BOOL hasHtASel;
@property (nonatomic) I htASel;
@property (nonatomic) BOOL hasHtAmpduParams;
@property (nonatomic) I htAmpduParams;
@property (nonatomic) BOOL hasHtSupportedMcsSet;
@property (nonatomic) NSData htSupportedMcsSet;
@property (nonatomic) BOOL hasVhtInfo;
@property (nonatomic) I vhtInfo;
@property (nonatomic) BOOL hasVhtSupportedMcsSet;
@property (nonatomic) NSData vhtSupportedMcsSet;
@property (nonatomic) Q txPerHistorysCount;
@property (nonatomic) ^i txPerHistorys;
@property (nonatomic) Q txFrmsHistorysCount;
@property (nonatomic) ^i txFrmsHistorys;
@property (nonatomic) Q fwTxPerHistorysCount;
@property (nonatomic) ^i fwTxPerHistorys;
@property (nonatomic) Q fwTxFrmsHistorysCount;
@property (nonatomic) ^i fwTxFrmsHistorys;
@property (nonatomic) Q bcnPerHistorysCount;
@property (nonatomic) ^i bcnPerHistorys;
@property (nonatomic) Q bcnFrmsHistorysCount;
@property (nonatomic) ^i bcnFrmsHistorys;
@property (nonatomic) BOOL hasGatewayARPHistory;
@property (nonatomic) I gatewayARPHistory;
@property (nonatomic) BOOL hasHeCapabilitiesIE;
@property (nonatomic) NSData heCapabilitiesIE;
@property (nonatomic) BOOL hasHeOperationIE;
@property (nonatomic) NSData heOperationIE;
@property (nonatomic) BOOL hasHeBSSLoadIE;
@property (nonatomic) NSData heBSSLoadIE;
@property (nonatomic) BOOL hasMuEDCAParametersIE;
@property (nonatomic) NSData muEDCAParametersIE;
@property (nonatomic) BOOL hasHeMacCapSubfields;
@property (nonatomic) I heMacCapSubfields;
@property (nonatomic) BOOL hasHePhyCapSubfields;
@property (nonatomic) I hePhyCapSubfields;
@property (nonatomic) BOOL hasHeRxTxMcsMap;
@property (nonatomic) I heRxTxMcsMap;
@property (nonatomic) BOOL hasHeOpsParams;
@property (nonatomic) I heOpsParams;
@property (nonatomic) BOOL hasHeBssMcsNss;
@property (nonatomic) I heBssMcsNss;
@property (nonatomic) BOOL hasHeStaCnt;
@property (nonatomic) I heStaCnt;
@property (nonatomic) BOOL hasHeUtilization;
@property (nonatomic) I heUtilization;
@property (nonatomic) BOOL hasHeBEParamRecord;
@property (nonatomic) I heBEParamRecord;
@property (nonatomic) BOOL hasHeBKParamRecord;
@property (nonatomic) I heBKParamRecord;
@property (nonatomic) BOOL hasHeVIParamRecord;
@property (nonatomic) I heVIParamRecord;
@property (nonatomic) BOOL hasHeVOParamRecord;
@property (nonatomic) I heVOParamRecord;
- (BOOL)hasIsInVol;
- (BOOL)hasHtTxBf;
- (unsigned int)htTxBf;
- (unsigned int)gatewayARPHistory;
- (void)setHasHtInfo:;
- (void)setHasChannel:;
- (unsigned int)securityType;
- (BOOL)hasSubreason;
- (BOOL)hasChannelWidth;
- (BOOL)hasWpaProtocol;
- (void)setHtExtended:;
- (BOOL)hasHtSupportedMcsSet;
- (id)txPerHistorys;
- (BOOL)hasAkmSuites;
- (int)fwTxPerHistoryAtIndex:;
- (BOOL)hasPhyMode;
- (id)fwTxPerHistorys;
- (void)setHasCapabilities:;
- (void)setHasFlags:;
- (void)setHtTxBf:;
- (int)txFrmsHistoryAtIndex:;
- (void)clearTxPerHistorys;
- (int)bcnPerHistoryAtIndex:;
- (unsigned int)ucastCipher;
- (void)setChannelWidth:;
- (BOOL)hasIsLinkUp;
- (void)addTxFrmsHistory:;
- (id)bcnFrmsHistorys;
- (unsigned long long)bcnPerHistorysCount;
- (void)setWpaProtocol:;
- (void)clearFwTxPerHistorys;
- (BOOL)hasFlags;
- (id)bcnPerHistorys;
- (void)clearFwTxFrmsHistorys;
- (unsigned int)mcastCipher;
- (void)clearTxFrmsHistorys;
- (void)clearBcnFrmsHistorys;
- (BOOL)hasGatewayARPHistory;
- (void)setHasIsLinkUp:;
- (unsigned int)htInfo;
- (void)setHasVhtInfo:;
- (BOOL)hasOui;
- (unsigned long long)fwTxFrmsHistorysCount;
- (unsigned int)htExtended;
- (BOOL)hasChannel;
- (unsigned int)htASel;
- (BOOL)hasHtAmpduParams;
- (BOOL)isInVol;
- (void)setHtInfo:;
- (id)htSupportedMcsSet;
- (void)setHasHtASel:;
- (unsigned long long)bcnFrmsHistorysCount;
- (void)setRssiHistorys:count:;
- (BOOL)hasSecurityType;
- (unsigned long long)txFrmsHistorysCount;
- (void)clearBcnPerHistorys;
- (id)txFrmsHistorys;
- (void)clearRssiHistorys;
- (unsigned long long)fwTxPerHistorysCount;
- (BOOL)hasHtExtended;
- (int)rssiHistoryAtIndex:;
- (void)setTxFrmsHistorys:count:;
- (int)txPerHistoryAtIndex:;
- (void)setBcnFrmsHistorys:count:;
- (unsigned long long)rssiHistorysCount;
- (void)setHasPhyMode:;
- (id)fwTxFrmsHistorys;
- (void)setHasUcastCipher:;
- (unsigned int)wpaProtocol;
- (id)vhtSupportedMcsSet;
- (void)setTxPerHistorys:count:;
- (BOOL)hasHtASel;
- (void)addFwTxFrmsHistory:;
- (void)setHtASel:;
- (void)setEnhancedSecurityType:;
- (void)setHasWpaProtocol:;
- (void)addTxPerHistory:;
- (void)setFwTxFrmsHistorys:count:;
- (void)setHasAkmSuites:;
- (void)setHasHtTxBf:;
- (void)setChannel:;
- (void)setHasHtAmpduParams:;
- (BOOL)hasVhtInfo;
- (void)setFwTxPerHistorys:count:;
- (void)setOui:;
- (void)setIsLinkUp:;
- (void)setIsInVol:;
- (void)setUcastCipher:;
- (unsigned int)akmSuites;
- (void)setHasChannelWidth:;
- (BOOL)hasMcastCipher;
- (unsigned int)enhancedSecurityType;
- (id)rssiHistorys;
- (unsigned int)vhtInfo;
- (BOOL)isLinkUp;
- (BOOL)hasHeStaCnt;
- (unsigned long long)txPerHistorysCount;
- (void)addBcnFrmsHistory:;
- (void)setHasMcastCipher:;
- (void)setHasSubreason:;
- (unsigned int)htAmpduParams;
- (void)setHasSecurityType:;
- (void)addBcnPerHistory:;
- (void)setHasGatewayARPHistory:;
- (int)bcnFrmsHistoryAtIndex:;
- (int)fwTxFrmsHistoryAtIndex:;
- (id)oui;
- (void)setSecurityType:;
- (void)addRssiHistory:;
- (BOOL)hasEnhancedSecurityType;
- (void)setHasEnhancedSecurityType:;
- (BOOL)hasUcastCipher;
- (BOOL)hasVhtSupportedMcsSet;
- (void)setHtAmpduParams:;
- (void)setHtSupportedMcsSet:;
- (void)setVhtSupportedMcsSet:;
- (void)setVhtInfo:;
- (void)setHasIsInVol:;
- (void)setGatewayARPHistory:;
- (void)setMcastCipher:;
- (void)setHasHtExtended:;
- (void)setAkmSuites:;
- (void)addFwTxPerHistory:;
- (BOOL)hasHtInfo;
- (void)setCapabilities:;
- (BOOL)hasCapabilities;
- (unsigned int)channelWidth;
- (BOOL)hasHeUtilization;
- (BOOL)hasHeRxTxMcsMap;
- (void)dealloc;
- (void)setHasHeStaCnt:;
- (unsigned int)channel;
- (BOOL)hasHeBssMcsNss;
- (unsigned int)capabilities;
- (unsigned int)phyMode;
- (unsigned int)heBssMcsNss;
- (void)setPhyMode:;
- (BOOL)hasHeVOParamRecord;
- (void)setHeBssMcsNss:;
- (id)heCapabilitiesIE;
- (void)setSubreason:;
- (void)setHeOpsParams:;
- (BOOL)hasMuEDCAParametersIE;
- (void)setHeVOParamRecord:;
- (id)muEDCAParametersIE;
- (void)setHasHePhyCapSubfields:;
- (void)setHasHeRxTxMcsMap:;
- (void)writeTo:;
- (unsigned int)heVIParamRecord;
- (unsigned int)heRxTxMcsMap;
- (void)setHasHeBKParamRecord:;
- (void)setHeRxTxMcsMap:;
- (void)setHasHeVOParamRecord:;
- (unsigned int)reason;
- (unsigned int)heUtilization;
- (BOOL)hasHeBSSLoadIE;
- (void)setHasHeBssMcsNss:;
- (BOOL)hasHeOperationIE;
- (void)setHeVIParamRecord:;
- (unsigned long long)hash;
- (void)setHasHeMacCapSubfields:;
- (void)setHeBEParamRecord:;
- (BOOL)hasHeMacCapSubfields;
- (unsigned int)heMacCapSubfields;
- (void)setHeStaCnt:;
- (void)setReason:;
- (void)setHasHeVIParamRecord:;
- (void)setHasHeBEParamRecord:;
- (void)setHasHeUtilization:;
- (unsigned int)subreason;
- (void)copyTo:;
- (BOOL)hasReason;
- (BOOL)hasHePhyCapSubfields;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (unsigned int)heStaCnt;
- (void)setHasHeOpsParams:;
- (BOOL)hasTimestamp;
- (BOOL)hasHeBEParamRecord;
- (void)setHeCapabilitiesIE:;
- (void)setTimestamp:;
- (void)setMuEDCAParametersIE:;
- (void)setHasReason:;
- (void)setHeOperationIE:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (void)setHePhyCapSubfields:;
- (BOOL)hasHeCapabilitiesIE;
- (BOOL)hasHeVIParamRecord;
- (void)setFlags:;
- (id)dictionaryRepresentation;
- (BOOL)hasHeBKParamRecord;
- (unsigned int)heBKParamRecord;
- (unsigned int)heOpsParams;
- (unsigned int)flags;
- (void)setHeUtilization:;
- (id)heOperationIE;
- (unsigned int)hePhyCapSubfields;
- (id)heBSSLoadIE;
- (BOOL)hasHeOpsParams;
- (unsigned int)heBEParamRecord;
- (unsigned int)heVOParamRecord;
- (void)setBcnPerHistorys:count:;
- (BOOL)isEqual:;
- (void)setHeBKParamRecord:;
- (id)copyWithZone:;
- (void)setHeBSSLoadIE:;
- (void)setHeMacCapSubfields:;
@end
