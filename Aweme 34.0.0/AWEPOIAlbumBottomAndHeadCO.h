@interface AWEPOIAlbumBottomAndHeadCO : AWEBaseApiModel
@property (nonatomic) AWEPOIAlbumBottomInfo bottomBar;
@property (nonatomic) NSArray rightMoreItems;
- (id)rightMoreItems;
- (void)setRightMoreItems:;
- (void)setBottomBar:;
- (id)bottomBar;
- (void).cxx_destruct;
+ (id)rightMoreItemsJSONTransformer;
+ (id)bottomBarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
