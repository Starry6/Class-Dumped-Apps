@interface CLSClassMember : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString personID;
@property (nonatomic) Q roles;
@property (nonatomic) BOOL markedForDeletion;
- (void)setRoles:;
- (unsigned long long)roles;
- (id)personID;
- (void)setPersonID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (BOOL)markedForDeletion;
- (void)setMarkedForDeletion:;
- (id)initWithClassID:personID:roles:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)objectIDForClassID:andPersonID:;
@end
