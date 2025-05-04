@interface AWEMusicDetailIspirationDataFactory : NSObject
@property (nonatomic) NSString musicID;
@property (nonatomic) NSMutableDictionary awemeListDataControllerManager;
@property (nonatomic) NSMutableDictionary inspirationModelManager;
@property (nonatomic) AWEAwemeModel enterModel;
- (id)musicID;
- (void)setEnterModel:;
- (id)enterModel;
- (void)setMusicID:;
- (void)updateEnterModel:;
- (id)lastGroupOriginMaterialsListJSONStringEncoded;
- (void)updateMusicID:;
- (void)fetchCombinedInspirationInfosWithCompletion:;
- (id)inspirationAwemeListDataControllerWithType:;
- (void)setInspirationModelManager:;
- (void)setAwemeListDataControllerManager:;
- (void)setupAwemeListDataControllerManager;
- (void)setupInspirationModelManager;
- (void)weakBindInspirationModelToListDataController;
- (id)awemeListDataControllerManager;
- (id)inspirationModelManager;
- (id)orderInspirationModels;
- (void)preFetchInspirationItemCoverImageWithModels:;
- (id)inspirationModelClasses;
- (id)inspirationAwemeListDataControllerClasses;
- (id)inspiartionModelWithType:;
- (id)init;
- (void).cxx_destruct;
@end
