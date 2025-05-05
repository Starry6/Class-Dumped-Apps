@interface TSXUserFilteredClock : TSXKernelClock
@property (nonatomic) Q nominalMachInterval;
@property (nonatomic) Q nominalDomainInterval;
@property (nonatomic) C filterShift;
@property (nonatomic) BOOL adaptive;
- (id)exportedObject;
- (BOOL)isAdaptive;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:;
- (BOOL)getMachAbsoluteRateRatioNumerator:denominator:machAnchor:andDomainAnchor:withError:;
- (BOOL)addTimestampWithMachAbsolute:andDomainTime:error:;
- (BOOL)resetSyncServiceWithError:;
- (BOOL)resetFilterToNominal:error:;
- (unsigned long long)nominalMachInterval;
- (unsigned long long)nominalDomainInterval;
- (unsigned char)filterShift;
+ (id)clientProtocol;
+ (id)serverProtocol;
@end
