@interface AWEECCommodityLandingConfiguration : NSObject
@property (nonatomic) NSString commodityID;
@property (nonatomic) q landingType;
@property (nonatomic) NSString keyword;
@property (nonatomic) BOOL disableRelatedMerchandises;
@property (nonatomic) BOOL isOptAB;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString sourceBtmToken;
- (void)setSourceBtmToken:;
- (long long)landingType;
- (id)sourceBtmToken;
- (void)setLandingType:;
- (BOOL)isOptAB;
- (void)setIsOptAB:;
- (id)commodityID;
- (void)setCommodityID:;
- (BOOL)disableRelatedMerchandises;
- (void)setDisableRelatedMerchandises:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)keyword;
- (void)setKeyword:;
@end
