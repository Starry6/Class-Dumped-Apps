@interface TSXgPTPClockExported : NSObject
@property (nonatomic) TSXgPTPClock object;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setObject:;
- (void).cxx_destruct;
- (id)object;
- (void)updateLockState:;
- (void)updateTimeSyncTime:timeSyncInterval:domainTime:domainInterval:;
- (void)resetClock;
- (void)changedClockMaster;
- (void)beginGrandmasterChangeWithGrandmasterID:localPort:;
- (void)endGrandmasterChangeWithGrandmasterID:localPort:;
- (void)changeLocalPortGrandmasterChangeWithGrandmasterID:localPort:;
- (void)updateWithSyncInfoValid:syncFlags:timeSyncTime:domainTimeHi:domainTimeLo:cumulativeScaledRate:inverseCumulativeScaledRate:grandmasterID:localPortNumber:;
- (void)updateGrandmasterIdentity:andgPTPPath:;
@end
