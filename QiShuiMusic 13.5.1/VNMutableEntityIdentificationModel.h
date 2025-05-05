@interface VNMutableEntityIdentificationModel : VNEntityIdentificationModel
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (BOOL)addObservations:toEntityWithUniqueIdentifier:error:;
- (BOOL)removeObservations:fromEntityWithUniqueIdentifier:error:;
- (BOOL)removeAllObservationsFromEntityWithUniqueIdentifier:error:;
- (BOOL)removeEntityWithUniqueIdentifier:error:;
- (BOOL)validateWithCanceller:error:;
- (void)entityIdentificationModelTrainingDataWasModified:;
- (BOOL)addAllPersonsFromPersonsModel:error:;
- (BOOL)addPersonWithUniqueIdentifier:fromPersonsModel:error:;
+ (id)modelWithConfiguration:error:;
+ (BOOL)canCreateModelOfClass:withObjects:error:;
+ (id)modelWithConfiguration:dataSource:error:;
+ (id)newModelForVersion:modelObjects:error:;
+ (id)modelFromPersonsModel:error:;
@end
