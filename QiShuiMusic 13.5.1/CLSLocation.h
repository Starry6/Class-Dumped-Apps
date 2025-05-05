@interface CLSLocation : CLSObject
@property (nonatomic) NSString locationName;
@property (nonatomic) NSString searchText;
@property (nonatomic) q sourceType;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSPersonNameComponents nameComponents;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString groupIdentifier;
- (void)setIsEditable:;
- (long long)sourceType;
- (id)locationName;
- (void)setSourceType:;
- (id)initWithCoder:;
- (BOOL)isEditable;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)searchText;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)setSearchText:;
- (void)setLocationName:;
- (id)initWithLocationID:name:;
+ (BOOL)supportsSecureCoding;
@end
