@interface PLFrequentLocationManager : NSObject
@property (nonatomic) <PLMomentGenerationDataManagement> momentGenerationDataManager;
@property (nonatomic) NSSet currentFrequentLocations;
- (id)momentGenerationDataManager;
- (void).cxx_destruct;
- (id)initWithMomentGenerationDataManager:;
- (BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:;
- (void)invalidateCurrentFrequentLocations;
- (id)_createFrequentLocationsWithAllMoments:;
- (void)setMomentGenerationDataManager:;
- (id)currentFrequentLocations;
- (void)setCurrentFrequentLocations:;
@end
