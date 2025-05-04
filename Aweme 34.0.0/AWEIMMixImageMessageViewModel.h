@interface AWEIMMixImageMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) UIImage currentImage;
@property (nonatomic) q imageLoadStatus;
@property (nonatomic) NSArray currentAvatarList;
- (id)coverTitle;
- (id)currentAvatarList;
- (void)updateMixedImageUserAvatarList;
- (long long)imageLoadStatus;
- (void)updateShownMixedImage;
- (void)p_updateShownMixedImageV2;
- (void)p_updateShownMixedImage;
- (void)p_updateMixedImageUserAvatarList;
- (void)setImageLoadStatus:;
- (id)configCoverURLInfo;
- (void)fetchCoverImage;
- (id)p_fetchUsersInfo;
- (void)setCurrentAvatarList:;
- (void).cxx_destruct;
- (id)currentImage;
- (void)setCurrentImage:;
@end
