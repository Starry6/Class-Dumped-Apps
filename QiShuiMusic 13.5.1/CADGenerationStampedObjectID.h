@interface CADGenerationStampedObjectID : CADObjectID
@property (nonatomic) NSInteger restoreGeneration;
- (int)restoreGeneration;
- (id)initWithEntityType:entityID:generation:;
- (Class)classForCoder;
- (id)initWithEntityType:entityID:databaseID:generation:;
- (BOOL)isEqual:;
@end
