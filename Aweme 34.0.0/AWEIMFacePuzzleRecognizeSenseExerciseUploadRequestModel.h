@interface AWEIMFacePuzzleRecognizeSenseExerciseUploadRequestModel : AWEBaseApiModel
@property (nonatomic) AWEIMFacePuzzlePicUpLoadModel mainPicUpload;
@property (nonatomic) AWEIMFacePuzzlePicUpLoadModel sensePicUpLoad;
- (void)setMainPicUpload:;
- (void)setSensePicUpLoad:;
- (id)mainPicUpload;
- (id)sensePicUpLoad;
- (void).cxx_destruct;
+ (id)mainPicUploadJSONTransformer;
+ (id)sensePicUpLoadJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
