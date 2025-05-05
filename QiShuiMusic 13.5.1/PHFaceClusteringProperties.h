@interface PHFaceClusteringProperties : PHFacePropertySet
@property (nonatomic) PHFaceprint faceprint;
@property (nonatomic) NSString groupingIdentifier;
- (id)groupingIdentifier;
- (void).cxx_destruct;
- (id)faceprint;
- (id)initWithFetchDictionary:face:prefetched:;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
