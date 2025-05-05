@interface CNUISnowglobeUtilities : NSObject
+ (id)avatarLayerForCGImages:inRect:forItemCount:scope:;
+ (id)roundedRectContainerLayerForRect:backgroundStyle:;
+ (id)defaultBackgroundColor;
+ (BOOL)enableGroupPhoto;
+ (id)roundedRectPlaceholderImageForSize:backgroundStyle:scale:;
+ (id)imageForLayer:inRect:;
+ (id)backgroundColorForBackgroundStyle:;
+ (id)sizeForImageAtIndex:inRect:forItemCount:scope:;
+ (id)imageForAvatarImages:badgeImages:badgeTypes:rect:itemCount:scope:;
+ (id)defaultDarkBackgroundColor;
+ (id)circularPlaceholderImageForSize:backgroundStyle:scale:;
+ (id)circularContainerLayerForRect:backgroundStyle:;
+ (id)containerLayerForRect:backgroundStyle:;
@end
