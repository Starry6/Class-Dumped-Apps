@interface CLSClass : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString className;
@property (nonatomic) NSString customClassName;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) NSString tempObjectID;
@property (nonatomic) q source;
@property (nonatomic) q originatingSource;
@property (nonatomic) NSString searchText;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) NSString iconID;
@property (nonatomic) NSArray classMembers;
@property (nonatomic) NSString locationID;
@property (nonatomic) NSPersonNameComponents nameComponents;
@property (nonatomic) NSString emailAddress;
- (void)acceptVisitor:;
- (id)className;
- (id)groupIdentifier;
- (void)setLocationID:;
- (void)setIsEditable:;
- (void)setClassName:;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (BOOL)isEditable;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)locationID;
- (long long)source;
- (id)searchText;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (void)setSearchText:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)initWithLocation:customName:;
- (id)classMembers;
- (void)addPerson:withRole:;
- (void)removePerson:withRole:;
- (id)iconID;
- (void)setIconID:;
- (long long)originatingSource;
- (void)setOriginatingSource:;
- (id)customClassName;
- (void)setCustomClassName:;
- (id)tempObjectID;
- (void)setTempObjectID:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
