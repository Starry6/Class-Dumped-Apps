@interface DAABLegacyAccount : NSObject
@property (nonatomic) ^v account;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (id)externalIdentifier;
- (BOOL)isContainer;
- (void)dealloc;
- (id)identifier;
- (BOOL)isGroup;
- (int)legacyIdentifier;
- (BOOL)isContact;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:;
- (id)initWithABAccout:;
@end
