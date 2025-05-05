@interface CNSharingProfilePhotoPickerItem : NSObject
@property (nonatomic) UIImage cachedPreviewImage;
@property (nonatomic) CNSharingProfileAvatarItem avatarItem;
@property (nonatomic) NSString symbolImageName;
- (id)symbolImageName;
- (void)setSymbolImageName:;
- (void).cxx_destruct;
- (id)originalImageWithSize:;
- (id)compositeImageWithSize:;
- (id)cachedPreviewImage;
- (void)setCachedPreviewImage:;
- (id)avatarItem;
- (void)setAvatarItem:;
@end
