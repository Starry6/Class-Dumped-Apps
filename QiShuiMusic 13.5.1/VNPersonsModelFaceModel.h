@interface VNPersonsModelFaceModel : NSObject
- (unsigned long long)faceprintRequestRevision;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:error:;
- (id)faceCountsForAllPersons;
- (unsigned long long)personCount;
- (id)initWithCoder:;
- (id)personUniqueIdentifiers;
- (id)personPredictionsForFace:withDescriptor:limit:canceller:error:;
- (void)encodeWithCoder:;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:;
- (id)faceCountsForPersonsWithUniqueIdentifiers:;
- (BOOL)isCompatibleWithConfiguration:;
+ (BOOL)supportsSecureCoding;
+ (id)modelBuiltFromConfiguration:dataProvider:canceller:error:;
+ (BOOL)getStoredRepresentationTag:forModelVersion:error:;
@end
