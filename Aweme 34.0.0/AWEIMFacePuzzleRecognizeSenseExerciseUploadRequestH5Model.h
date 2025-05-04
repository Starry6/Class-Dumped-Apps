@interface AWEIMFacePuzzleRecognizeSenseExerciseUploadRequestH5Model : AWEBaseApiModel
@property (nonatomic) AWEIMFacePuzzlePicUpLoadH5Model mainPicUpload;
@property (nonatomic) AWEIMFacePuzzlePicUpLoadH5Model sensePicUpLoad;
- (void)setMainPicUpload:;
- (void)setSensePicUpLoad:;
- (id)mainPicUpload;
- (id)sensePicUpLoad;
- (void).cxx_destruct;
+ (id)convertFromReqModel:;
+ (id)mainPicUploadJSONTransformer;
+ (id)sensePicUpLoadJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
