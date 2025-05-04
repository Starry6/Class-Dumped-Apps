@interface AWEFeedGoodsElementPriceManager : NSObject
- (id)getGoodsDetailModelFromDictionary:;
- (id)getPriceLabelViewWithGoodsDetail:;
- (void)setupPriceLabel:withGoodsDetail:;
- (id)decodeFromRawData:;
- (void)setupMainPriceLabel:supportPriceLabel:supportTextLabel:withGoodsDetail:;
- (id)getPriceLabelViewWithAweme:;
+ (id)sharedManager;
@end
