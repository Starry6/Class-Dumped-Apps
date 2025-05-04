@interface AWEIMFacePuzzlePicModel : AWEBaseApiModel
@property (nonatomic) NSString imageUri;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString imageSkey;
@property (nonatomic) NSString md5;
@property (nonatomic) q senseExercisePicEnum;
@property (nonatomic) NSString decryptImageUrl;
@property (nonatomic) UIImage image;
- (void)setImageUri:;
- (id)imageUri;
- (id)decryptImageUrl;
- (void)setImageSkey:;
- (id)imageSkey;
- (void)setDecryptImageUrl:;
- (void)setSenseExercisePicEnum:;
- (long long)senseExercisePicEnum;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setMd5:;
- (id)md5;
+ (id)JSONKeyPathsByPropertyKey;
@end
