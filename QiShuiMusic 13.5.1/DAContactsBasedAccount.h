@interface DAContactsBasedAccount : NSObject
@property (nonatomic) CNAccount account;
@property (nonatomic) BOOL markedForDeletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (id)externalIdentifier;
- (BOOL)isContainer;
- (id)identifier;
- (BOOL)isGroup;
- (int)legacyIdentifier;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (BOOL)isContact;
- (BOOL)markedForDeletion;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:;
- (void)setMarkedForDeletion:;
@end
