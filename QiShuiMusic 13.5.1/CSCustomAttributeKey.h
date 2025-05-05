@interface CSCustomAttributeKey : NSObject
@property (nonatomic) NSString keyName;
@property (nonatomic) BOOL unique;
@property (nonatomic) BOOL searchable;
@property (nonatomic) BOOL searchableByDefault;
@property (nonatomic) BOOL multiValued;
- (id)init;
- (void)setSearchableByDefault:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)isSearchableByDefault;
- (id)keyName;
- (id)initWithKeyName:searchable:searchableByDefault:unique:multiValued:;
- (void)setKeyName:;
- (void)encodeWithCoder:;
- (BOOL)isMultiValued;
- (id)initWithKeyName:;
- (void).cxx_destruct;
- (void)setSearchable:;
- (id)description;
- (void)setUnique:;
- (BOOL)isSearchable;
- (void)setMultiValued:;
- (BOOL)isEqual:;
- (BOOL)isUnique;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_keyNameIsValid:;
@end
