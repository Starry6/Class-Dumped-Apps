@interface EDInteractionEventLogLegacyPersistentBitsProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_queryKeychainError:;
- (id)_findExistingSaltError:;
- (id)_persistentBits;
- (id)_oldSalt;
+ (id)log;
@end
