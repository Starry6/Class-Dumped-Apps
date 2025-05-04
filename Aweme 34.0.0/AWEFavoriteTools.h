@interface AWEFavoriteTools : NSObject
+ (id)tabIdentifierWithModel:;
+ (id)tabNameWithModel:;
+ (BOOL)findType:inTableItemModel:;
+ (id)favoriteTabNameByType:;
+ (id)primaryTabNameByType:;
+ (id)primaryTabIdentifierByType:;
+ (id)favoriteTabIdentifierByType:;
@end
