@interface PLDetectedFace : PLManagedObject
@property (nonatomic) NSSet rejectedPersons;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) NSInteger faceAlgorithmVersion;
@property (nonatomic) NSDate adjustmentVersion;
@property (nonatomic) <PLSyncablePerson> person;
@property (nonatomic) <PLSyncablePerson> personBeingKeyFace;
@property (nonatomic) q sourceWidth;
@property (nonatomic) q sourceHeight;
@property (nonatomic) BOOL isTrainingFace;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL hidden;
@property (nonatomic) NSInteger nameSource;
@property (nonatomic) NSInteger cloudNameSource;
@property (nonatomic) NSInteger trainingType;
@property (nonatomic) s detectionType;
@property (nonatomic) s cloudLocalState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @ localID;
@property (nonatomic) NSInteger nameSource;
@property (nonatomic) NSInteger cloudNameSource;
@property (nonatomic) PLManagedAsset asset;
@property (nonatomic) PLFaceCrop faceCrop;
@property (nonatomic) PLDetectedFaceGroup faceGroup;
@property (nonatomic) PLDetectedFaceprint faceprint;
@property (nonatomic) PLPerson person;
@property (nonatomic) PLPerson personBeingKeyFace;
@property (nonatomic) NSSet rejectedPersons;
@property (nonatomic) PLDetectedFaceGroup faceGroupBeingKeyFace;
@property (nonatomic) NSString uuid;
@property (nonatomic) q sourceWidth;
@property (nonatomic) q sourceHeight;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double bodyHeight;
@property (nonatomic) s detectionType;
@property (nonatomic) double roll;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isInTrash;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic) BOOL isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed;
@property (nonatomic) NSString masterIdentifier;
@property (nonatomic) s confirmedFaceCropGenerationState;
@property (nonatomic) NSSet rejectedPersonsNeedingFaceCrops;
@property (nonatomic) NSSet clusterRejectedPersons;
@property (nonatomic) NSInteger trainingType;
@property (nonatomic) s vipModelType;
@property (nonatomic) NSDate adjustmentVersion;
@property (nonatomic) double poseYaw;
@property (nonatomic) NSInteger faceAlgorithmVersion;
@property (nonatomic) NSInteger clusterSequenceNumber;
@property (nonatomic) NSInteger qualityMeasure;
@property (nonatomic) double quality;
@property (nonatomic) s cloudLocalState;
@property (nonatomic) BOOL assetVisible;
@property (nonatomic) NSInteger effectiveNameSource;
@property (nonatomic) S ageType;
@property (nonatomic) S genderType;
@property (nonatomic) S eyesState;
@property (nonatomic) S smileType;
@property (nonatomic) S facialHairType;
@property (nonatomic) S hairColorType;
@property (nonatomic) S glassesType;
@property (nonatomic) S eyeMakeupType;
@property (nonatomic) S lipMakeupType;
@property (nonatomic) NSString groupingIdentifier;
@property (nonatomic) NSSet detectionTraits;
@property (nonatomic) S faceExpressionType;
@property (nonatomic) S headgearType;
@property (nonatomic) S hairType;
@property (nonatomic) S poseType;
@property (nonatomic) S skintoneType;
@property (nonatomic) S ethnicityType;
@property (nonatomic) BOOL hasFaceMask;
@property (nonatomic) S gazeType;
@property (nonatomic) double gazeCenterX;
@property (nonatomic) double gazeCenterY;
- (id)payloadID;
- (void)delete;
- (BOOL)isSyncableChange;
- (id)payloadIDForTombstone:;
- (void)willSave;
- (id)payloadForChangedKeys:;
- (void)awakeFromInsert;
- (id)debugLogDescription;
- (id)cplFullRecord;
- (BOOL)isValidForJournalPersistence;
- (BOOL)supportsCloudUpload;
- (id)localID;
- (id)namingDescription;
- (void)addClusterRejectedPerson:;
- (void)removeFaceprint;
- (void)setEffectiveNameSource:;
- (void)addRejectedPersonNeedingFaceCrops:;
- (BOOL)validForPersistenceChangedForChangedKeys:;
- (void)_touchPersonForPersistenceIfNeeded;
- (void)_updateFaceGroupIfNeeded;
- (BOOL)isTrainingFace;
- (BOOL)isTorsoOnly;
- (void)_verifyAssetRelationship;
- (void)addRejectedPerson:;
- (int)effectiveNameSource;
- (id)syncDescription;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;
+ (id)entityName;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:predicate:library:completion:;
+ (id)syncableFacesPredicate;
+ (id)predicateToExcludeBodyOnlyDetection;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (void)resetCloudStateInPhotoLibrary:;
+ (id)_syncableFacesToUploadInitiallyPredicate;
+ (id)predicatesForFacesNeedingFaceCropGeneration;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:managedObjectContext:assetUUIDHandler:;
+ (id)detectedFaceWithUUID:inManagedObjectContext:;
+ (unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:inManagedObjectContext:;
+ (id)_facesMatchingPredicate:limit:inPhotoLibrary:;
+ (id)predicateForFaceCountTrigger;
+ (id)syncableFacesToUploadInitiallyInLibrary:limit:;
+ (id)findExistingFaceMatchingDimension:inFaces:ignoreSourceAssetDimensions:;
+ (void)batchFetchKeyFaceByPersonObjectIDWithPersonObjectIDs:library:completion:;
+ (id)predicateForArchival;
+ (id)predicateForIncludedDetectionTypes:;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:error:;
@end
