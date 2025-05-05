@interface IESLiveSaaSPBRushLuckyBoxResponse_ResponseData : GPBMessage
@property (nonatomic) BOOL succeed;
@property (nonatomic) BOOL expired;
@property (nonatomic) q diamondCount;
@property (nonatomic) NSInteger rushSpam;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) IESLiveSaaSPBImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger rushTooOften;
@property (nonatomic) NSInteger rushTooMuch;
@property (nonatomic) q giftId;
@property (nonatomic) q cashCount;
@property (nonatomic) NSString giftName;
@property (nonatomic) NSString description_p;
@property (nonatomic) q multiple;
@property (nonatomic) IESLiveSaaSPBRushLuckyBoxResponse_GiftGuide giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
+ (id)descriptor;
@end
