@interface AWEIMMixPhotoInfo : MTLModel
@property (nonatomic) NSString imageUri;
@property (nonatomic) NSString imageSkey;
@property (nonatomic) NSString md5;
@property (nonatomic) double coverWidth;
@property (nonatomic) double coverHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setImageUri:;
- (id)imageUri;
- (double)coverWidth;
- (void)setCoverWidth:;
- (double)coverHeight;
- (void)setCoverHeight:;
- (void)setImageSkey:;
- (id)imageSkey;
- (void).cxx_destruct;
- (void)setMd5:;
- (id)md5;
+ (id)JSONKeyPathsByPropertyKey;
@end
