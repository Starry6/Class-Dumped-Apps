@interface AWEFavoriteTabFilterManager : NSObject
+ (id)filterTabItemArray:;
+ (BOOL)shouldBeFilted:;
+ (BOOL)isInvalidTabItem:;
+ (BOOL)shouldAddToTabItemArray:;
+ (BOOL)shouldFiltForGoods:;
+ (BOOL)hasECommerce;
@end
