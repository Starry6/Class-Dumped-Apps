@interface AWEIMFacePuzzlePicUpLoadH5Model : AWEBaseApiModel
@property (nonatomic) q senseExercisePicEnum;
@property (nonatomic) NSString decryptImageUrl;
- (id)decryptImageUrl;
- (void)setDecryptImageUrl:;
- (void)setSenseExercisePicEnum:;
- (long long)senseExercisePicEnum;
- (void).cxx_destruct;
+ (id)convertFromReqModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
