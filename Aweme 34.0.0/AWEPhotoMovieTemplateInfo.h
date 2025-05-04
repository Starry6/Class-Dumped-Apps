@interface AWEPhotoMovieTemplateInfo : NSObject
@property (nonatomic) NSArray templateVideoCoverURL;
@property (nonatomic) NSArray templatePictureCoverURL;
@property (nonatomic) q templateMinMaterial;
@property (nonatomic) q templateMaxMaterial;
@property (nonatomic) q templatePicInputWidth;
@property (nonatomic) q templatePicInputHeight;
@property (nonatomic) NSString templatePicFillMode;
@property (nonatomic) q templateType;
- (long long)templateMaxMaterial;
- (long long)templateMinMaterial;
- (void)setTemplateMaxMaterial:;
- (void)setTemplateMinMaterial:;
- (id)templateVideoCoverURL;
- (void)setTemplateVideoCoverURL:;
- (id)templatePictureCoverURL;
- (void)setTemplatePictureCoverURL:;
- (long long)templatePicInputWidth;
- (void)setTemplatePicInputWidth:;
- (long long)templatePicInputHeight;
- (void)setTemplatePicInputHeight:;
- (id)templatePicFillMode;
- (void)setTemplatePicFillMode:;
- (long long)templateType;
- (void).cxx_destruct;
- (void)setTemplateType:;
@end
