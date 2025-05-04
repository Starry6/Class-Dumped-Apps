@interface AWEFeedStickerHandlerFactory : NSObject
+ (BOOL)supportGlobalSticker:;
+ (id)albumHandlersForModel:;
+ (id)searchAlbumHandlersForModel:;
+ (id)searchTagsForModel:;
+ (id)videoHandlersForItemModel:;
+ (id)videoHandlersForAwemeModel:;
+ (Class)videoHandlerClassForType:awemeModel:;
+ (Class)videoHandlerClassForType:itemModel:;
+ (Class)albumHandlerClassForType:;
@end
