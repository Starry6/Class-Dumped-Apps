@interface NotesMigrationMapping : NSObject
@property (nonatomic) NSArray sourceModels;
@property (nonatomic) NSString descriptionString;
@property (nonatomic) NSManagedObjectModel destinationModel;
@property (nonatomic) q type;
- (void)setDescriptionString:;
- (void)setType:;
- (id)descriptionString;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)destinationModel;
- (id)sourceModelForStoreMetadata:;
- (id)mappingModelForStoreMetadata:;
- (BOOL)canMigrateStoreMetadata:;
- (void)setDestinationModel:;
- (id)sourceModels;
- (void)setSourceModels:;
+ (id)mappings;
+ (id)descriptionStringFromSourceStoreNames:destinationStoreName:;
+ (id)modelForModelName:;
+ (id)inferredMappingFromSourceModelNames:toDestinationModelName:;
+ (id)customMappingFromSourceModelName:toDestinationModelName:;
@end
