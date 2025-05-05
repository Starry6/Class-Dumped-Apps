@interface IESECGoodsRecommendDataControllerInputParams : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString shopID;
@property (nonatomic) NSString ecomSceneID;
@property (nonatomic) NSString detailEnterFrom;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isInvalidProduct;
@property (nonatomic) NSString pdpSessionID;
- (id)detailEnterFrom;
- (void)setEcomSceneID:;
- (id)ecomSceneID;
- (BOOL)fromLive;
- (BOOL)isInvalidProduct;
- (id)pdpSessionID;
- (void)setDetailEnterFrom:;
- (void)setFromLive:;
- (void)setIsInvalidProduct:;
- (void)setPdpSessionID:;
- (void)setShopID:;
- (id)shopID;
- (id)productID;
- (void)setProductID:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
@end
