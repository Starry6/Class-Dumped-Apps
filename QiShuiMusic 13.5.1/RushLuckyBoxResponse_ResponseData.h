@interface RushLuckyBoxResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSNumber serverTimeStamp;
@property (nonatomic) BOOL succeed;
@property (nonatomic) BOOL expired;
@property (nonatomic) q diamondCount;
@property (nonatomic) NSInteger rushSpam;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger rushTooOften;
@property (nonatomic) NSInteger rushTooMuch;
@property (nonatomic) q giftId;
@property (nonatomic) q cashCount;
@property (nonatomic) NSString giftName;
@property (nonatomic) NSString description_p;
@property (nonatomic) q multiple;
@property (nonatomic) RushLuckyBoxResponse_GiftGuide giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (nonatomic) NSString dressId;
@property (nonatomic) RushLuckyBoxResponse_ExpandAward expandAward;
@property (nonatomic) BOOL hasExpandAward;
@property (nonatomic) LuckyBoxBonus bonus;
@property (nonatomic) BOOL hasBonus;
- (id)serverTimeStamp;
- (void)setServerTimeStamp:;
+ (id)descriptor;
@end
