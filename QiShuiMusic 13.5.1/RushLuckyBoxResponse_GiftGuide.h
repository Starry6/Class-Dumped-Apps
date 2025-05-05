@interface RushLuckyBoxResponse_GiftGuide : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) q giftCount;
@property (nonatomic) HTSLiveImage giftImage;
@property (nonatomic) BOOL hasGiftImage;
@property (nonatomic) NSString giftName;
@property (nonatomic) HTSLiveImage coinAnimation;
@property (nonatomic) BOOL hasCoinAnimation;
@property (nonatomic) q propDefId;
+ (id)descriptor;
@end
