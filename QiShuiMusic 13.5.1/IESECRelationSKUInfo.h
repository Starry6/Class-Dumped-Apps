@interface IESECRelationSKUInfo : NSObject
@property (nonatomic) NSString promotionId;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString authorId;
@property (nonatomic) q skuType;
@property (nonatomic) NSString orderURL;
@property (nonatomic) NSString ecomSceneId;
@property (nonatomic) NSString cartTrack;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSDictionary orderEntranceInfo;
@property (nonatomic) NSString BtmID;
@property (nonatomic) NSString btm;
@property (nonatomic) NSDictionary bcm;
@property (nonatomic) UIResponder host;
@property (nonatomic) NSString buyInTrack;
@property (nonatomic) NSString cBizCombo;
- (id)BtmID;
- (id)bcm;
- (id)btm;
- (void)setEcomSceneId:;
- (void)setPromotionId:;
- (void)setTrackParams:;
- (long long)skuType;
- (void)setBcm:;
- (void)setBtm:;
- (id)buyInTrack;
- (id)cBizCombo;
- (id)cartTrack;
- (id)ecomSceneId;
- (id)orderEntranceInfo;
- (id)promotionId;
- (void)setBtmID:;
- (void)setBuyInTrack:;
- (void)setCBizCombo:;
- (void)setCartTrack:;
- (void)setOrderEntranceInfo:;
- (void)setSkuType:;
- (id)trackParams;
- (id)host;
- (id)productId;
- (void)setHost:;
- (void).cxx_destruct;
- (id)orderURL;
- (void)setOrderURL:;
- (void)setProductId:;
- (id)authorId;
- (void)setAuthorId:;
@end
