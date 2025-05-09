@interface AWDWiFiLTEWCI2Counters : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasWlanRxPriTimeInMS;
@property (nonatomic) Q wlanRxPriTimeInMS;
@property (nonatomic) BOOL hasWlanRxPriCount;
@property (nonatomic) Q wlanRxPriCount;
@property (nonatomic) BOOL hasLteTxPowerLimitTimeInMS;
@property (nonatomic) Q lteTxPowerLimitTimeInMS;
@property (nonatomic) BOOL hasLteTxPowerLimitCount;
@property (nonatomic) Q lteTxPowerLimitCount;
@property (nonatomic) BOOL hasType4HonouredTimeInMS;
@property (nonatomic) Q type4HonouredTimeInMS;
@property (nonatomic) BOOL hasType4HonouredCount;
@property (nonatomic) Q type4HonouredCount;
@property (nonatomic) BOOL hasTimeSharingWLANTimeInMS;
@property (nonatomic) Q timeSharingWLANTimeInMS;
@property (nonatomic) BOOL hasTimeSharingWLANIntervalCount;
@property (nonatomic) Q timeSharingWLANIntervalCount;
@property (nonatomic) BOOL hasWlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) Q wlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) BOOL hasType4DueToTimerExpiryCount;
@property (nonatomic) Q type4DueToTimerExpiryCount;
@property (nonatomic) NSMutableArray wci2Counters;
- (void)dealloc;
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
- (void)setWlanRxPriTimeInMS:;
- (void)setHasWlanRxPriTimeInMS:;
- (BOOL)hasWlanRxPriTimeInMS;
- (void)setWlanRxPriCount:;
- (void)setHasWlanRxPriCount:;
- (BOOL)hasWlanRxPriCount;
- (void)setLteTxPowerLimitTimeInMS:;
- (void)setHasLteTxPowerLimitTimeInMS:;
- (BOOL)hasLteTxPowerLimitTimeInMS;
- (void)setLteTxPowerLimitCount:;
- (void)setHasLteTxPowerLimitCount:;
- (BOOL)hasLteTxPowerLimitCount;
- (void)setType4HonouredTimeInMS:;
- (void)setHasType4HonouredTimeInMS:;
- (BOOL)hasType4HonouredTimeInMS;
- (void)setType4HonouredCount:;
- (void)setHasType4HonouredCount:;
- (BOOL)hasType4HonouredCount;
- (void)setTimeSharingWLANTimeInMS:;
- (void)setHasTimeSharingWLANTimeInMS:;
- (BOOL)hasTimeSharingWLANTimeInMS;
- (void)setTimeSharingWLANIntervalCount:;
- (void)setHasTimeSharingWLANIntervalCount:;
- (BOOL)hasTimeSharingWLANIntervalCount;
- (void)setWlanProtectionFramesDueToLTECoexCount:;
- (void)setHasWlanProtectionFramesDueToLTECoexCount:;
- (BOOL)hasWlanProtectionFramesDueToLTECoexCount;
- (void)setType4DueToTimerExpiryCount:;
- (void)setHasType4DueToTimerExpiryCount:;
- (BOOL)hasType4DueToTimerExpiryCount;
- (void)clearWci2Counters;
- (void)addWci2Counters:;
- (unsigned long long)wci2CountersCount;
- (id)wci2CountersAtIndex:;
- (unsigned long long)wlanRxPriTimeInMS;
- (unsigned long long)wlanRxPriCount;
- (unsigned long long)lteTxPowerLimitTimeInMS;
- (unsigned long long)lteTxPowerLimitCount;
- (unsigned long long)type4HonouredTimeInMS;
- (unsigned long long)type4HonouredCount;
- (unsigned long long)timeSharingWLANTimeInMS;
- (unsigned long long)timeSharingWLANIntervalCount;
- (unsigned long long)wlanProtectionFramesDueToLTECoexCount;
- (unsigned long long)type4DueToTimerExpiryCount;
- (id)wci2Counters;
- (void)setWci2Counters:;
+ (Class)wci2CountersType;
@end
