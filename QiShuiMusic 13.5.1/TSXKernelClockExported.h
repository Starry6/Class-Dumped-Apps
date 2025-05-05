@interface TSXKernelClockExported : NSObject
@property (nonatomic) TSXKernelClock object;
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
@end
