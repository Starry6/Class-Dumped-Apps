@interface MPServerObjectDatabaseMediaAPIImportChildRelation : NSObject
@property (nonatomic) MPIdentifierSet identifiers;
@property (nonatomic) MPIdentifierSet parentIdentifiers;
@property (nonatomic) NSString childKey;
@property (nonatomic) q relativeOrder;
- (id)identifiers;
- (void)setChildKey:;
- (id)initWithItemIdentifiers:parentIdentifiers:childKey:relativeOrder:;
- (id)parentIdentifiers;
- (id)childKey;
- (void)setIdentifiers:;
- (void).cxx_destruct;
- (void)setParentIdentifiers:;
- (void)setRelativeOrder:;
- (long long)relativeOrder;
@end
