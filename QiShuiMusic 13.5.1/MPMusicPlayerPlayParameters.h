@interface MPMusicPlayerPlayParameters : NSObject
@property (nonatomic) MPIdentifierSet identifiers;
@property (nonatomic) NSString itemKind;
@property (nonatomic) BOOL libraryContent;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString catalogID;
@property (nonatomic) NSString libraryID;
@property (nonatomic) NSString persistentID;
@property (nonatomic) NSDictionary dictionary;
- (id)libraryID;
- (id)dictionary;
- (id)identifiers;
- (id)itemID;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)itemKind;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)persistentID;
- (BOOL)isLibraryContent;
- (id)catalogID;
+ (BOOL)supportsSecureCoding;
@end
