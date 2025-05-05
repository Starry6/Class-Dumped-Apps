@interface ACPersonaManager : NSObject
@property (nonatomic) NSString enterprisePersonaUID;
@property (nonatomic) NSString personalPersonaUID;
@property (nonatomic) NSSet guestPersonasUIDs;
@property (nonatomic) NSArray dataSeparatedPersonasUIDs;
- (id)init;
- (id)personalPersonaUID;
- (BOOL)_shouldCachePersonas;
- (void)_lockedUpdatePersonasUIDsIfNeeded;
- (id)guestPersonasUIDs;
- (id)enterprisePersonaUID;
- (void)_lockedLoadCache;
- (void)_lockedSaveCurrentCache;
- (void)updatePersonasUIDs;
- (id)_cacheURL;
- (void).cxx_destruct;
- (id)dataSeparatedPersonasUIDs;
- (id)store;
+ (void)_changePersonaContextUsingPersonaID:withCompletion:;
+ (id)sharedInstance;
+ (BOOL)performWithinPersona:withBlock:;
+ (void)performWithinPersonaForAccount:withBlock:;
+ (void)performWithinPersonaForAccountIdentifier:withBlock:;
@end
