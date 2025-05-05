@interface CNAvatarImageUtilities : NSObject
+ (id)transparencyInsetsForImage:requiringFullOpacity:;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:requiringFullOpacity:;
+ (id)croppedAndCenteredAvatarImageForImage:widthMultiplier:;
+ (id)croppedAndCenteredAvatarImageForImage:usingTransparencyInsets:widthMultiplier:;
@end
