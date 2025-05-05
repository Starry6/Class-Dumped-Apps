@interface IESECRelationClickedGoodsIDStat : NSObject
+ (void)addClickedGoodsID:key:;
+ (void)addClickedGoodsID:storeID:;
+ (void)addClickedGoodsID:windowID:;
+ (id)getCRelationStatDictionary;
+ (id)getClickedGoodsID:;
+ (id)getStoreClickedGoodsID:;
+ (id)getWindowClickedGoodsID:;
@end
