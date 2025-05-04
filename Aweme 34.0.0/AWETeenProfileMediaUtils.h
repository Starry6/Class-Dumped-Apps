@interface AWETeenProfileMediaUtils : NSObject
+ (void)showAvatarPreviewWithImage:imageURL:userID:;
+ (void)selectAvatarWithSourceView:selectedBlock:otherActions:needUpload:completionBlock:;
+ (BOOL)useCreativeAlbumKit;
+ (void)selectAvatar:sender:completionBlock:;
+ (void)submitAvatarWithImage:param:completionBlock:;
+ (BOOL)enableSetVideoPickerTitle;
@end
