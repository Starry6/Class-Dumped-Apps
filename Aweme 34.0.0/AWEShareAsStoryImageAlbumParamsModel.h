@interface AWEShareAsStoryImageAlbumParamsModel : AWEShareAsStoryParamsModel
@property (nonatomic) q imageIndex;
@property (nonatomic) UIImage sharedImage;
@property (nonatomic) BOOL needShowImageIcon;
- (id)sharedImage;
- (void)setSharedImage:;
- (BOOL)needShowImageIcon;
- (void)setNeedShowImageIcon:;
- (void).cxx_destruct;
- (long long)imageIndex;
- (void)setImageIndex:;
@end
