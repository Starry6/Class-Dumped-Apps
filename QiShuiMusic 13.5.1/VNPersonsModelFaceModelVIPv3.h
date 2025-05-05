@interface VNPersonsModelFaceModelVIPv3 : VNPersonsModelFaceModel
- (BOOL)_getSerialNumber:forPersonUniqueIdentifier:error:;
- (unsigned long long)faceprintRequestRevision;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:error:;
- (id)faceCountsForAllPersons;
- (unsigned long long)personCount;
- (id)initWithCoder:;
- (id)personUniqueIdentifiers;
- (id)personPredictionsForFace:withDescriptor:limit:canceller:error:;
- (void)encodeWithCoder:;
- (id)_personPredictionsForFace:withDescriptor:limit:faceIDCanceller:error:;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:;
- (void).cxx_destruct;
- (id)faceCountsForPersonsWithUniqueIdentifiers:;
- (id).cxx_construct;
- (id)initWithFaceIDModel:faceprintRequestRevision:personUniqueIdentifierToSerialNumberMapping:;
+ (BOOL)supportsSecureCoding;
+ (id)_concatenateFaceprintImageDescriptorBuffer:withFaceprints:forIdentityWithSerialNumber:faceprintLabels:;
+ (id)modelBuiltFromConfiguration:dataProvider:canceller:error:;
+ (BOOL)getStoredRepresentationTag:forModelVersion:error:;
@end
