@interface AWEGoodsEnterFullScreenRequest : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString goodsID;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString sourcePage;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) AWEGoodsTrackObject enterProductDetailTrackObject;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)setSourcePage:;
- (void)setGoodsID:;
- (void)setEnterProductDetailTrackObject:;
- (id)enterProductDetailTrackObject;
- (id)sourcePage;
- (id)goodsID;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)extraData;
- (void)setExtraData:;
@end
