@interface VCPProtoAssetAnalysis : PBCodable
@property (nonatomic) I version;
@property (nonatomic) I types;
@property (nonatomic) I flags;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) double quality;
@property (nonatomic) BOOL hasStatsFlags;
@property (nonatomic) Q statsFlags;
@property (nonatomic) BOOL hasTypesWide;
@property (nonatomic) Q typesWide;
@property (nonatomic) NSString assetIdentifier;
@property (nonatomic) double assetModificationDate;
@property (nonatomic) NSString assetMasterFingerprint;
@property (nonatomic) BOOL hasAssetAdjustedFingerprint;
@property (nonatomic) NSString assetAdjustedFingerprint;
@property (nonatomic) NSMutableArray imageBlurResults;
@property (nonatomic) NSMutableArray imageCompositionResults;
@property (nonatomic) NSMutableArray imageFaceResults;
@property (nonatomic) NSMutableArray imageFeatureResults;
@property (nonatomic) NSMutableArray imageJunkResults;
@property (nonatomic) NSMutableArray imageSaliencyResults;
@property (nonatomic) NSMutableArray imageShotTypeResults;
@property (nonatomic) NSMutableArray imagePetsResults;
@property (nonatomic) NSMutableArray imagePetsFaceResults;
@property (nonatomic) NSMutableArray imageSceneprintResults;
@property (nonatomic) NSMutableArray livePhotoEffectsResults;
@property (nonatomic) NSMutableArray livePhotoRecommendationResults;
@property (nonatomic) NSMutableArray livePhotoSharpnessResults;
@property (nonatomic) NSMutableArray livePhotoKeyFrameResults;
@property (nonatomic) NSMutableArray livePhotoKeyFrameStillResults;
@property (nonatomic) NSMutableArray movieActivityLevelResults;
@property (nonatomic) NSMutableArray movieCameraMotionResults;
@property (nonatomic) NSMutableArray movieClassificationResults;
@property (nonatomic) NSMutableArray movieFaceResults;
@property (nonatomic) NSMutableArray movieFaceprintResults;
@property (nonatomic) NSMutableArray movieFeatureResults;
@property (nonatomic) NSMutableArray movieFineSubjectMotionResults;
@property (nonatomic) NSMutableArray movieInterestingnessResults;
@property (nonatomic) NSMutableArray movieMovingObjectResults;
@property (nonatomic) NSMutableArray movieMusicResults;
@property (nonatomic) NSMutableArray movieObstructionResults;
@property (nonatomic) NSMutableArray movieOrientationResults;
@property (nonatomic) NSMutableArray moviePreEncodeResults;
@property (nonatomic) NSMutableArray movieQualityResults;
@property (nonatomic) NSMutableArray movieSaliencyResults;
@property (nonatomic) NSMutableArray movieSceneResults;
@property (nonatomic) NSMutableArray movieSceneprintResults;
@property (nonatomic) NSMutableArray movieSubjectMotionResults;
@property (nonatomic) NSMutableArray movieSubtleMotionResults;
@property (nonatomic) NSMutableArray movieUtteranceResults;
@property (nonatomic) NSMutableArray movieVoiceResults;
@property (nonatomic) NSMutableArray movieSummaryResults;
@property (nonatomic) NSMutableArray movieHighlightResults;
@property (nonatomic) NSMutableArray imageExposureResults;
@property (nonatomic) NSMutableArray imageHumanPoseResults;
@property (nonatomic) NSMutableArray movieHumanPoseResults;
@property (nonatomic) NSMutableArray movieApplauseResults;
@property (nonatomic) NSMutableArray movieBabbleResults;
@property (nonatomic) NSMutableArray movieCheeringResults;
@property (nonatomic) NSMutableArray movieLaughterResults;
@property (nonatomic) NSMutableArray movieHumanActionResults;
@property (nonatomic) NSMutableArray movieLoudnessResults;
@property (nonatomic) NSMutableArray moviePetsResults;
@property (nonatomic) NSMutableArray moviePetsFaceResults;
@property (nonatomic) NSMutableArray movieStabilizationResults;
@property (nonatomic) NSMutableArray movieHighlightScoreResults;
@property (nonatomic) NSMutableArray livePhotoHumanActionClassificationResults;
@property (nonatomic) NSMutableArray movieAudioQualityResults;
- (void)setHasQuality:;
- (double)quality;
- (void)setQuality:;
- (BOOL)hasQuality;
- (void)setVersion:;
- (unsigned int)version;
- (unsigned int)types;
- (void)writeTo:;
- (void)setTypes:;
- (unsigned long long)hash;
- (void)copyTo:;
- (double)date;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setDate:;
- (id)description;
- (void)setFlags:;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)assetIdentifier;
- (void)setAssetIdentifier:;
- (id)movieHighlightResults;
- (id)movieSummaryResults;
- (id)movieHighlightScoreResults;
- (id)exportToLegacyDictionary;
- (unsigned long long)statsFlags;
- (void)setStatsFlags:;
- (void)setHasStatsFlags:;
- (BOOL)hasStatsFlags;
- (void)setTypesWide:;
- (void)setHasTypesWide:;
- (BOOL)hasTypesWide;
- (BOOL)hasAssetAdjustedFingerprint;
- (void)clearImageBlurResults;
- (void)addImageBlurResults:;
- (unsigned long long)imageBlurResultsCount;
- (id)imageBlurResultsAtIndex:;
- (void)clearImageCompositionResults;
- (void)addImageCompositionResults:;
- (unsigned long long)imageCompositionResultsCount;
- (id)imageCompositionResultsAtIndex:;
- (void)clearImageFaceResults;
- (void)addImageFaceResults:;
- (unsigned long long)imageFaceResultsCount;
- (id)imageFaceResultsAtIndex:;
- (void)clearImageFeatureResults;
- (void)addImageFeatureResults:;
- (unsigned long long)imageFeatureResultsCount;
- (id)imageFeatureResultsAtIndex:;
- (void)clearImageJunkResults;
- (void)addImageJunkResults:;
- (unsigned long long)imageJunkResultsCount;
- (id)imageJunkResultsAtIndex:;
- (void)clearImageSaliencyResults;
- (void)addImageSaliencyResults:;
- (unsigned long long)imageSaliencyResultsCount;
- (id)imageSaliencyResultsAtIndex:;
- (void)clearImageShotTypeResults;
- (void)addImageShotTypeResults:;
- (unsigned long long)imageShotTypeResultsCount;
- (id)imageShotTypeResultsAtIndex:;
- (void)clearImagePetsResults;
- (void)addImagePetsResults:;
- (unsigned long long)imagePetsResultsCount;
- (id)imagePetsResultsAtIndex:;
- (void)clearImagePetsFaceResults;
- (void)addImagePetsFaceResults:;
- (unsigned long long)imagePetsFaceResultsCount;
- (id)imagePetsFaceResultsAtIndex:;
- (void)clearImageSceneprintResults;
- (void)addImageSceneprintResults:;
- (unsigned long long)imageSceneprintResultsCount;
- (id)imageSceneprintResultsAtIndex:;
- (void)clearLivePhotoEffectsResults;
- (void)addLivePhotoEffectsResults:;
- (unsigned long long)livePhotoEffectsResultsCount;
- (id)livePhotoEffectsResultsAtIndex:;
- (void)clearLivePhotoRecommendationResults;
- (void)addLivePhotoRecommendationResults:;
- (unsigned long long)livePhotoRecommendationResultsCount;
- (id)livePhotoRecommendationResultsAtIndex:;
- (void)clearLivePhotoSharpnessResults;
- (void)addLivePhotoSharpnessResults:;
- (unsigned long long)livePhotoSharpnessResultsCount;
- (id)livePhotoSharpnessResultsAtIndex:;
- (void)clearLivePhotoKeyFrameResults;
- (void)addLivePhotoKeyFrameResults:;
- (unsigned long long)livePhotoKeyFrameResultsCount;
- (id)livePhotoKeyFrameResultsAtIndex:;
- (void)clearLivePhotoKeyFrameStillResults;
- (void)addLivePhotoKeyFrameStillResults:;
- (unsigned long long)livePhotoKeyFrameStillResultsCount;
- (id)livePhotoKeyFrameStillResultsAtIndex:;
- (void)clearMovieActivityLevelResults;
- (void)addMovieActivityLevelResults:;
- (unsigned long long)movieActivityLevelResultsCount;
- (id)movieActivityLevelResultsAtIndex:;
- (void)clearMovieCameraMotionResults;
- (void)addMovieCameraMotionResults:;
- (unsigned long long)movieCameraMotionResultsCount;
- (id)movieCameraMotionResultsAtIndex:;
- (void)clearMovieClassificationResults;
- (void)addMovieClassificationResults:;
- (unsigned long long)movieClassificationResultsCount;
- (id)movieClassificationResultsAtIndex:;
- (void)clearMovieFaceResults;
- (void)addMovieFaceResults:;
- (unsigned long long)movieFaceResultsCount;
- (id)movieFaceResultsAtIndex:;
- (void)clearMovieFaceprintResults;
- (void)addMovieFaceprintResults:;
- (unsigned long long)movieFaceprintResultsCount;
- (id)movieFaceprintResultsAtIndex:;
- (void)clearMovieFeatureResults;
- (void)addMovieFeatureResults:;
- (unsigned long long)movieFeatureResultsCount;
- (id)movieFeatureResultsAtIndex:;
- (void)clearMovieFineSubjectMotionResults;
- (void)addMovieFineSubjectMotionResults:;
- (unsigned long long)movieFineSubjectMotionResultsCount;
- (id)movieFineSubjectMotionResultsAtIndex:;
- (void)clearMovieInterestingnessResults;
- (void)addMovieInterestingnessResults:;
- (unsigned long long)movieInterestingnessResultsCount;
- (id)movieInterestingnessResultsAtIndex:;
- (void)clearMovieMovingObjectResults;
- (void)addMovieMovingObjectResults:;
- (unsigned long long)movieMovingObjectResultsCount;
- (id)movieMovingObjectResultsAtIndex:;
- (void)clearMovieMusicResults;
- (void)addMovieMusicResults:;
- (unsigned long long)movieMusicResultsCount;
- (id)movieMusicResultsAtIndex:;
- (void)clearMovieObstructionResults;
- (void)addMovieObstructionResults:;
- (unsigned long long)movieObstructionResultsCount;
- (id)movieObstructionResultsAtIndex:;
- (void)clearMovieOrientationResults;
- (void)addMovieOrientationResults:;
- (unsigned long long)movieOrientationResultsCount;
- (id)movieOrientationResultsAtIndex:;
- (void)clearMoviePreEncodeResults;
- (void)addMoviePreEncodeResults:;
- (unsigned long long)moviePreEncodeResultsCount;
- (id)moviePreEncodeResultsAtIndex:;
- (void)clearMovieQualityResults;
- (void)addMovieQualityResults:;
- (unsigned long long)movieQualityResultsCount;
- (id)movieQualityResultsAtIndex:;
- (void)clearMovieSaliencyResults;
- (void)addMovieSaliencyResults:;
- (unsigned long long)movieSaliencyResultsCount;
- (id)movieSaliencyResultsAtIndex:;
- (void)clearMovieSceneResults;
- (void)addMovieSceneResults:;
- (unsigned long long)movieSceneResultsCount;
- (id)movieSceneResultsAtIndex:;
- (void)clearMovieSceneprintResults;
- (void)addMovieSceneprintResults:;
- (unsigned long long)movieSceneprintResultsCount;
- (id)movieSceneprintResultsAtIndex:;
- (void)clearMovieSubjectMotionResults;
- (void)addMovieSubjectMotionResults:;
- (unsigned long long)movieSubjectMotionResultsCount;
- (id)movieSubjectMotionResultsAtIndex:;
- (void)clearMovieSubtleMotionResults;
- (void)addMovieSubtleMotionResults:;
- (unsigned long long)movieSubtleMotionResultsCount;
- (id)movieSubtleMotionResultsAtIndex:;
- (void)clearMovieUtteranceResults;
- (void)addMovieUtteranceResults:;
- (unsigned long long)movieUtteranceResultsCount;
- (id)movieUtteranceResultsAtIndex:;
- (void)clearMovieVoiceResults;
- (void)addMovieVoiceResults:;
- (unsigned long long)movieVoiceResultsCount;
- (id)movieVoiceResultsAtIndex:;
- (void)clearMovieSummaryResults;
- (void)addMovieSummaryResults:;
- (unsigned long long)movieSummaryResultsCount;
- (id)movieSummaryResultsAtIndex:;
- (void)clearMovieHighlightResults;
- (void)addMovieHighlightResults:;
- (unsigned long long)movieHighlightResultsCount;
- (id)movieHighlightResultsAtIndex:;
- (void)clearImageExposureResults;
- (void)addImageExposureResults:;
- (unsigned long long)imageExposureResultsCount;
- (id)imageExposureResultsAtIndex:;
- (void)clearImageHumanPoseResults;
- (void)addImageHumanPoseResults:;
- (unsigned long long)imageHumanPoseResultsCount;
- (id)imageHumanPoseResultsAtIndex:;
- (void)clearMovieHumanPoseResults;
- (void)addMovieHumanPoseResults:;
- (unsigned long long)movieHumanPoseResultsCount;
- (id)movieHumanPoseResultsAtIndex:;
- (void)clearMovieApplauseResults;
- (void)addMovieApplauseResults:;
- (unsigned long long)movieApplauseResultsCount;
- (id)movieApplauseResultsAtIndex:;
- (void)clearMovieBabbleResults;
- (void)addMovieBabbleResults:;
- (unsigned long long)movieBabbleResultsCount;
- (id)movieBabbleResultsAtIndex:;
- (void)clearMovieCheeringResults;
- (void)addMovieCheeringResults:;
- (unsigned long long)movieCheeringResultsCount;
- (id)movieCheeringResultsAtIndex:;
- (void)clearMovieLaughterResults;
- (void)addMovieLaughterResults:;
- (unsigned long long)movieLaughterResultsCount;
- (id)movieLaughterResultsAtIndex:;
- (void)clearMovieHumanActionResults;
- (void)addMovieHumanActionResults:;
- (unsigned long long)movieHumanActionResultsCount;
- (id)movieHumanActionResultsAtIndex:;
- (void)clearMovieLoudnessResults;
- (void)addMovieLoudnessResults:;
- (unsigned long long)movieLoudnessResultsCount;
- (id)movieLoudnessResultsAtIndex:;
- (void)clearMoviePetsResults;
- (void)addMoviePetsResults:;
- (unsigned long long)moviePetsResultsCount;
- (id)moviePetsResultsAtIndex:;
- (void)clearMoviePetsFaceResults;
- (void)addMoviePetsFaceResults:;
- (unsigned long long)moviePetsFaceResultsCount;
- (id)moviePetsFaceResultsAtIndex:;
- (void)clearMovieStabilizationResults;
- (void)addMovieStabilizationResults:;
- (unsigned long long)movieStabilizationResultsCount;
- (id)movieStabilizationResultsAtIndex:;
- (void)clearMovieHighlightScoreResults;
- (void)addMovieHighlightScoreResults:;
- (unsigned long long)movieHighlightScoreResultsCount;
- (id)movieHighlightScoreResultsAtIndex:;
- (void)clearLivePhotoHumanActionClassificationResults;
- (void)addLivePhotoHumanActionClassificationResults:;
- (unsigned long long)livePhotoHumanActionClassificationResultsCount;
- (id)livePhotoHumanActionClassificationResultsAtIndex:;
- (void)clearMovieAudioQualityResults;
- (void)addMovieAudioQualityResults:;
- (unsigned long long)movieAudioQualityResultsCount;
- (id)movieAudioQualityResultsAtIndex:;
- (unsigned long long)typesWide;
- (double)assetModificationDate;
- (void)setAssetModificationDate:;
- (id)assetMasterFingerprint;
- (void)setAssetMasterFingerprint:;
- (id)assetAdjustedFingerprint;
- (void)setAssetAdjustedFingerprint:;
- (id)imageBlurResults;
- (void)setImageBlurResults:;
- (id)imageCompositionResults;
- (void)setImageCompositionResults:;
- (id)imageFaceResults;
- (void)setImageFaceResults:;
- (id)imageFeatureResults;
- (void)setImageFeatureResults:;
- (id)imageJunkResults;
- (void)setImageJunkResults:;
- (id)imageSaliencyResults;
- (void)setImageSaliencyResults:;
- (id)imageShotTypeResults;
- (void)setImageShotTypeResults:;
- (id)imagePetsResults;
- (void)setImagePetsResults:;
- (id)imagePetsFaceResults;
- (void)setImagePetsFaceResults:;
- (id)imageSceneprintResults;
- (void)setImageSceneprintResults:;
- (id)livePhotoEffectsResults;
- (void)setLivePhotoEffectsResults:;
- (id)livePhotoRecommendationResults;
- (void)setLivePhotoRecommendationResults:;
- (id)livePhotoSharpnessResults;
- (void)setLivePhotoSharpnessResults:;
- (id)livePhotoKeyFrameResults;
- (void)setLivePhotoKeyFrameResults:;
- (id)livePhotoKeyFrameStillResults;
- (void)setLivePhotoKeyFrameStillResults:;
- (id)movieActivityLevelResults;
- (void)setMovieActivityLevelResults:;
- (id)movieCameraMotionResults;
- (void)setMovieCameraMotionResults:;
- (id)movieClassificationResults;
- (void)setMovieClassificationResults:;
- (id)movieFaceResults;
- (void)setMovieFaceResults:;
- (id)movieFaceprintResults;
- (void)setMovieFaceprintResults:;
- (id)movieFeatureResults;
- (void)setMovieFeatureResults:;
- (id)movieFineSubjectMotionResults;
- (void)setMovieFineSubjectMotionResults:;
- (id)movieInterestingnessResults;
- (void)setMovieInterestingnessResults:;
- (id)movieMovingObjectResults;
- (void)setMovieMovingObjectResults:;
- (id)movieMusicResults;
- (void)setMovieMusicResults:;
- (id)movieObstructionResults;
- (void)setMovieObstructionResults:;
- (id)movieOrientationResults;
- (void)setMovieOrientationResults:;
- (id)moviePreEncodeResults;
- (void)setMoviePreEncodeResults:;
- (id)movieQualityResults;
- (void)setMovieQualityResults:;
- (id)movieSaliencyResults;
- (void)setMovieSaliencyResults:;
- (id)movieSceneResults;
- (void)setMovieSceneResults:;
- (id)movieSceneprintResults;
- (void)setMovieSceneprintResults:;
- (id)movieSubjectMotionResults;
- (void)setMovieSubjectMotionResults:;
- (id)movieSubtleMotionResults;
- (void)setMovieSubtleMotionResults:;
- (id)movieUtteranceResults;
- (void)setMovieUtteranceResults:;
- (id)movieVoiceResults;
- (void)setMovieVoiceResults:;
- (void)setMovieSummaryResults:;
- (void)setMovieHighlightResults:;
- (id)imageExposureResults;
- (void)setImageExposureResults:;
- (id)imageHumanPoseResults;
- (void)setImageHumanPoseResults:;
- (id)movieHumanPoseResults;
- (void)setMovieHumanPoseResults:;
- (id)movieApplauseResults;
- (void)setMovieApplauseResults:;
- (id)movieBabbleResults;
- (void)setMovieBabbleResults:;
- (id)movieCheeringResults;
- (void)setMovieCheeringResults:;
- (id)movieLaughterResults;
- (void)setMovieLaughterResults:;
- (id)movieHumanActionResults;
- (void)setMovieHumanActionResults:;
- (id)movieLoudnessResults;
- (void)setMovieLoudnessResults:;
- (id)moviePetsResults;
- (void)setMoviePetsResults:;
- (id)moviePetsFaceResults;
- (void)setMoviePetsFaceResults:;
- (id)movieStabilizationResults;
- (void)setMovieStabilizationResults:;
- (void)setMovieHighlightScoreResults:;
- (id)livePhotoHumanActionClassificationResults;
- (void)setLivePhotoHumanActionClassificationResults:;
- (id)movieAudioQualityResults;
- (void)setMovieAudioQualityResults:;
- (BOOL)setAttributesFromLegacyDictionary:;
- (BOOL)setResults:withClass:forPropertyKey:;
- (BOOL)exportResultsWithPropertyKey:toLegacyDictionary:withKey:;
+ (Class)imageBlurResultsType;
+ (Class)imageCompositionResultsType;
+ (Class)imageFaceResultsType;
+ (Class)imageFeatureResultsType;
+ (Class)imageJunkResultsType;
+ (Class)imageSaliencyResultsType;
+ (Class)imageShotTypeResultsType;
+ (Class)imagePetsResultsType;
+ (Class)imagePetsFaceResultsType;
+ (Class)imageSceneprintResultsType;
+ (Class)livePhotoEffectsResultsType;
+ (Class)livePhotoRecommendationResultsType;
+ (Class)livePhotoSharpnessResultsType;
+ (Class)livePhotoKeyFrameResultsType;
+ (Class)livePhotoKeyFrameStillResultsType;
+ (Class)movieActivityLevelResultsType;
+ (Class)movieCameraMotionResultsType;
+ (Class)movieClassificationResultsType;
+ (Class)movieFaceResultsType;
+ (Class)movieFaceprintResultsType;
+ (Class)movieFeatureResultsType;
+ (Class)movieFineSubjectMotionResultsType;
+ (Class)movieInterestingnessResultsType;
+ (Class)movieMovingObjectResultsType;
+ (Class)movieMusicResultsType;
+ (Class)movieObstructionResultsType;
+ (Class)movieOrientationResultsType;
+ (Class)moviePreEncodeResultsType;
+ (Class)movieQualityResultsType;
+ (Class)movieSaliencyResultsType;
+ (Class)movieSceneResultsType;
+ (Class)movieSceneprintResultsType;
+ (Class)movieSubjectMotionResultsType;
+ (Class)movieSubtleMotionResultsType;
+ (Class)movieUtteranceResultsType;
+ (Class)movieVoiceResultsType;
+ (Class)movieSummaryResultsType;
+ (Class)movieHighlightResultsType;
+ (Class)imageExposureResultsType;
+ (Class)imageHumanPoseResultsType;
+ (Class)movieHumanPoseResultsType;
+ (Class)movieApplauseResultsType;
+ (Class)movieBabbleResultsType;
+ (Class)movieCheeringResultsType;
+ (Class)movieLaughterResultsType;
+ (Class)movieHumanActionResultsType;
+ (Class)movieLoudnessResultsType;
+ (Class)moviePetsResultsType;
+ (Class)moviePetsFaceResultsType;
+ (Class)movieStabilizationResultsType;
+ (Class)movieHighlightScoreResultsType;
+ (Class)livePhotoHumanActionClassificationResultsType;
+ (Class)movieAudioQualityResultsType;
+ (id)imageAnalysisFromLegacyDictionary:;
+ (id)movieAnalysisFromLegacyDictionary:;
@end
