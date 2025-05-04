@interface AWESearchCardNameProvider : NSObject
+ (id)videoSearchCardNameForModel:;
+ (id)teensAlbumCardName;
+ (id)gameWeakVideoCardName;
+ (id)searchCardNameForLynxCardName:;
+ (id)searchCardNameForECommerce:;
+ (BOOL)isCommerceForModel:;
+ (BOOL)isXiguaForModel:;
+ (BOOL)isImageAlbumForModel:;
@end
