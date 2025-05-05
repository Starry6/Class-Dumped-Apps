@interface CADObjectID : NSObject
@property (nonatomic) NSInteger entityType;
@property (nonatomic) NSInteger entityID;
@property (nonatomic) NSInteger databaseID;
@property (nonatomic) BOOL temporary;
- (id)stampedCopyWithGeneration:;
- (id)entityName;
- (int)databaseID;
- (id)URIRepresentation;
- (id)stringRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (BOOL)isTemporary;
- (void)encodeWithCoder:;
- (int)entityType;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)entityID;
- (id)initWithEntityType:entityID:;
- (id)initWithEntityType:entityID:databaseID:;
+ (BOOL)supportsSecureCoding;
@end
