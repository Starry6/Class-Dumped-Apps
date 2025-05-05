@interface PLDetectedFaceGroup : PLManagedObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSSet detectedFaces;
@property (nonatomic) NSInteger unnamedFaceCount;
@property (nonatomic) PLPerson associatedPerson;
@property (nonatomic) PLDetectedFace keyFace;
@property (nonatomic) NSInteger personBuilderState;
- (void)willSave;
- (void)awakeFromInsert;
- (id)mutableDetectedFaces;
+ (id)entityName;
+ (id)detectedFaceGroupWithUUID:inManagedObjectContext:;
+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:predicate:library:completion:;
@end
