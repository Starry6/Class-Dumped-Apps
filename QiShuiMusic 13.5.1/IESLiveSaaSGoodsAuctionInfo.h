@interface IESLiveSaaSGoodsAuctionInfo : BDDynamicMTLModel
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString priceLabel;
@property (nonatomic) q status;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) IESLiveSaaSGoodsAuctionUserModel currentUserInfo;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) BOOL buttonEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)buttonEnabled;
+ (id)JSONKeyPathsByPropertyKey;
@end
