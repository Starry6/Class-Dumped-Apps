@interface AWEIMCodeGenPicModel : AWEBaseDataModel
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString imageSkey;
@property (nonatomic) NSString md5;
@property (nonatomic) q senseExercisePicEnum;
- (void)setImageSkey:;
- (id)imageSkey;
- (void)setSenseExercisePicEnum:;
- (long long)senseExercisePicEnum;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setMd5:;
- (id)md5;
+ (id)JSONKeyPathsByPropertyKey;
@end
