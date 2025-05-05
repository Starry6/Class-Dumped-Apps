@interface TSTranslationClock : TSClock
- (int)lockState;
- (id)_impl;
- (void).cxx_destruct;
- (void)setPropertyUpdateQueue:;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:;
- (BOOL)convertFromMachAbsoluteTime:toDomainTime:withCount:;
- (BOOL)convertFromDomainTime:toMachAbsoluteTime:withCount:;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:;
- (BOOL)getMachAbsoluteRateRatioNumerator:denominator:machAnchor:andDomainAnchor:withError:;
- (unsigned long long)convertFromTimeSyncToDomainTime:;
- (unsigned long long)convertFromDomainToTimeSyncTime:;
- (BOOL)convertFromTimeSyncTime:toDomainTime:withCount:;
- (BOOL)convertFromDomainTime:toTimeSyncTime:withCount:;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:;
- (BOOL)getTimeSyncTimeRateRatioNumerator:denominator:timeSyncAnchor:andDomainAnchor:withError:;
- (double)hostRateRatio;
- (id)initWithImplXPC:;
+ (id)keyPathsforvaluesaffectingLockState;
+ (id)keyPathsForValuesAffectingHostRateRatio;
@end
