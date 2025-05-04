@interface AWEIMFacePuzzleFeatureCategoryInfo : NSObject
@property (nonatomic) q descEnum;
@property (nonatomic) q featureEnum;
@property (nonatomic) NSString mainImageSkey;
@property (nonatomic) NSString decryptImageUrl;
- (id)decryptImageUrl;
- (void)setDecryptImageUrl:;
- (void)setDescEnum:;
- (void)setFeatureEnum:;
- (void)setMainImageSkey:;
- (long long)featureEnum;
- (long long)descEnum;
- (id)mainImageSkey;
- (void).cxx_destruct;
@end
