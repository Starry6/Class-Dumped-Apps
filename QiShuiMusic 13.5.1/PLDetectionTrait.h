@interface PLDetectionTrait : PLManagedObject
@property (nonatomic) s type;
@property (nonatomic) s value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) PLDetectedFace detection;
- (id)payloadID;
- (void)willSave;
- (id)payloadForChangedKeys:;
- (id)debugLogDescription;
- (void)_touchPersonForPersistenceIfNeeded;
+ (id)entityName;
+ (id)fetchDetectionTraitByFaceUUIDWithFaceUUIDs:library:error:;
+ (id)insertIntoManagedObjectContext:type:value:score:startTime:duration:;
@end
