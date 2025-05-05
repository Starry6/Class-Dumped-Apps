@interface VCPFaceIDModel : NSObject
+ (id)faceObservationFromFaceprintData:;
+ (id)classifyFaceObservation:withModel:error:;
+ (id)personVIPModelFileName;
+ (id)petVIPModelFileName;
+ (id)animalObservationFromAnimalprintData:;
+ (id)newMutablePersonsModel;
+ (float)petClassificationThreshold;
+ (id)classifyAnimalObservation:withModel:error:;
+ (id)_loadModelAtPath:error:;
+ (id)_loadPetsModelAtPath:error:;
+ (id)loadVIPModelAtPath:withVIPType:error:;
+ (BOOL)persistModel:toPath:error:;
+ (BOOL)persistPetsModel:toPath:error:;
+ (BOOL)addFaceObservations:forPersonIdentifier:toModel:error:;
@end
