@interface VNReadOnlyPersonsModel : VNPersonsModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)faceObservationsForPersonWithUniqueIdentifier:error:;
- (id)faceCountsForAllPersons;
- (unsigned long long)personCount;
- (unsigned long long)personsModel:indexOfPersonWithUniqueIdentifier:;
- (id)personUniqueIdentifiers;
- (unsigned long long)numberOfPersonsInPersonsModel:;
- (unsigned long long)personsModel:numberOfFaceObservationsForPersonAtIndex:;
- (id)initWithConfiguration:faceModel:;
- (BOOL)dropCurrentFaceModelAndReturnError:;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:;
- (id)faceCountsForPersonsWithUniqueIdentifiers:;
- (id)personsModel:faceObservationAtIndex:forPersonAtIndex:;
- (id)upToDateFaceModelWithCanceller:error:;
- (id)personsModel:uniqueIdentifierOfPersonAtIndex:;
+ (BOOL)isReadOnly;
+ (id)newModelFromVersion:objects:error:;
@end
