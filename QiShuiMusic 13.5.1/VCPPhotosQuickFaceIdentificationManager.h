@interface VCPPhotosQuickFaceIdentificationManager : NSObject
- (id)initWithPhotoLibrary:;
- (id)init;
- (BOOL)_persistPersonsModel:evaluationMode:error:;
- (int)classifyVIPPets;
- (BOOL)_persistPetsModel:error:;
- (int)_loadPersonsModelAndInitializeFaceAnalyzer;
- (int)_generatePetsModelWithExtendTimeoutBlock:cancel:;
- (int)_generatePersonsModelWithExtendTimeoutBlock:cancel:evaluationMode:allowUnverifiedPerson:;
- (id)_fetchPersonsToFeedVIPModel:allowUnverifiedPerson:;
- (BOOL)_faceProcessingPassGoalWithExtendTimeout:;
- (id)fetchEntityForModelType:evaluationMode:allowUnverifiedPerson:;
- (void).cxx_destruct;
- (int)_loadPetsModel;
- (int)_classifyFaces:forAsset:detectedPersons:;
- (id)_fetchPetsToFeedVIPModel;
- (void)personIdentificationForSyndicationPhotoLibrary:withCancelOrExtendTimeoutBlock:;
- (BOOL)_keepCurrentPersonsModelWithExtendTimeout:;
- (BOOL)_needToGenerateModelWithType:ignoreLastGenerationTime:withExtendTimeout:;
- (int)processAsset:onDemandDetection:detectedFaces:detectedPersons:;
- (int)generateVIPModelWithType:ignoreLastGenerationTime:evaluationMode:allowUnverifiedPerson:modelGenerated:extendTimeout:andCancel:;
- (BOOL)_modelLastGenerationDidExceedTimeIntervalForType:;
- (int)loadPersonsModelAndInitializeFaceAnalyzerWrapper;
+ (BOOL)_fastFaceMigrationEnabled;
@end
