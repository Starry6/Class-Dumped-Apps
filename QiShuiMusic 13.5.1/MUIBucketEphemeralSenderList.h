@interface MUIBucketEphemeralSenderList : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) EFLocked addresses;
@property (nonatomic) <EFScheduler> writeScheduler;
@property (nonatomic) NSObject<OS_dispatch_queue> contentProtectionQueue;
@property (nonatomic) BOOL isWaitingOnUnlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (void)contentProtectionStateChanged:previousState:;
- (void).cxx_destruct;
- (id)contentProtectionQueue;
- (id)addresses;
- (id)initWithDirectory:populationBlock:;
- (id)_loadFromURL:;
- (id)_stringAddressesFromPopulationBlock:;
- (id)_simpleAddressForString:;
- (BOOL)isAddressInList:;
- (void)addSenderToList:;
- (void)addAddressesToList:;
- (void)removeSenderFromList:;
- (void)removeAddressesFromList:;
- (void)_scheduleWrite;
- (id)writeScheduler;
- (BOOL)isWaitingOnUnlock;
@end
