@interface EDInteractionEventLogSaltProvider : NSObject
@property (nonatomic) NSData salt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_queryKeychainError:;
- (id)salt;
- (void)_deleteSalt;
- (id)_createSalt;
- (id)_findOrCreateSalt;
- (void)setSalt:;
- (void).cxx_destruct;
- (id)_findExistingSaltError:;
- (BOOL)migrateAccessClass;
+ (id)log;
+ (id)saltProviderWithString:;
+ (id)saltProviderFromKeyChain;
@end
