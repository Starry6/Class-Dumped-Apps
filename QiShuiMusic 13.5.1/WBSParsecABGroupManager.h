@interface WBSParsecABGroupManager : NSObject
@property (nonatomic) <WBSParsecABGroupStore> groupStore;
@property (nonatomic) Q groupIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)groupIdentifier;
- (void).cxx_destruct;
- (void)abGroupStoreDidUpdateGroupIdentifier:;
- (id)initWithGroupStore:;
- (void)shuffleGroup;
- (void)_scheduleShuffleTimer;
- (void)_generateAndSaveNewGroupIdentifier;
- (void)_postDidChangeGroupIdentifierNotification;
- (id)groupStore;
+ (unsigned long long)ephemeralGroupIdentifier;
+ (unsigned long long)_weightedRandomIdentifier;
@end
