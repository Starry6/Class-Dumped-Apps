@interface TSXClockManagerExported : NSObject
@property (nonatomic) TSXClockManager object;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setObject:;
- (void)updateTranslationClockLockState:;
- (void)updateTranslationClockTimeSyncTime:timeSyncInterval:domainTime:domainInterval:;
- (void)changedTranslationClockMaster;
- (void).cxx_destruct;
- (id)object;
@end
