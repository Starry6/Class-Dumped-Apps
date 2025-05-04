@interface AWEProfileAwemeStatHelper : NSObject
+ (void)changedAwemeDiggStateWithModels:itemID:isDigged:;
+ (void)changedAwemeFavoriteStateWithModels:itemID:isFavorited:;
+ (void)changeAwemeDiggStateWith:isDigged:;
+ (void)changeAwemeFavoriteStateWith:isFavorited:;
@end
