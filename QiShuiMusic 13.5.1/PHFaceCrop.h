@interface PHFaceCrop : PHObject
@property (nonatomic) NSData resourceData;
@property (nonatomic) s state;
@property (nonatomic) s type;
- (short)type;
- (short)state;
- (void).cxx_destruct;
- (id)resourceData;
- (id)initWithFetchDictionary:propertyHint:photoLibrary:;
- (Class)changeRequestClass;
+ (id)transformValueExpression:forKeyPath:;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:;
+ (id)fetchFaceCropsWithOptions:;
+ (id)fetchFaceCropsWithLocalIdentifiers:options:;
+ (id)fetchFaceCropsForPerson:options:;
+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:;
+ (id)fetchTransientTrainingFaceCropsForPerson:options:;
+ (id)_trainingFaceCropByUUIDForPerson:options:;
+ (id)fetchFaceCropByFaceLocalIdentifierForFaces:fetchOptions:;
@end
