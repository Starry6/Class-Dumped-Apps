@interface AWEAdChallengeLiveECommerceCardModel : MTLModel
@property (nonatomic) NSNumber cardType;
@property (nonatomic) AWEAdChallengeRoomModel roomData;
@property (nonatomic) AWEAdChallengeShopModel shopData;
@property (nonatomic) NSString cardCover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomData;
- (void)setRoomData:;
- (id)shopData;
- (void)setShopData:;
- (id)cardCover;
- (void)setCardCover:;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
