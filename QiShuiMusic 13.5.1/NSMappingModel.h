@interface NSMappingModel : NSObject
@property (nonatomic) NSArray entityMappings;
@property (nonatomic) NSDictionary entityMappingsByName;
- (void)_throwIfNotEditable;
- (id)init;
- (void)dealloc;
- (id)initWithContentsOfURL:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)entityMappings;
- (void)setEntityMappings:;
- (id)entityMappingsByName;
- (id)_initWithEntityMappings:;
+ (BOOL)supportsSecureCoding;
+ (id)mappingModelFromBundles:forSourceModel:destinationModel:;
+ (int)migrationDebugLevel;
+ (id)_newMappingModelFromBundles:forSourceHashes:destinationHashes:;
+ (void)setMigrationDebugLevel:;
+ (id)inferredMappingModelForSourceModel:destinationModel:error:;
@end
