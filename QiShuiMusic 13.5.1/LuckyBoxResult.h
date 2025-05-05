@interface LuckyBoxResult : IESLivePBBaseMessage
@property (nonatomic) BOOL succeed;
@property (nonatomic) q boxId;
@property (nonatomic) NSString boxIdStr;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) q diamondCount;
@property (nonatomic) q giftId;
@property (nonatomic) NSString giftName;
@property (nonatomic) q cashCount;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString text;
@property (nonatomic) LuckyBoxExpandAward expandAward;
@property (nonatomic) BOOL hasExpandAward;
@property (nonatomic) LuckyBoxGiftGuide giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (nonatomic) LuckyBoxBonus bonus;
@property (nonatomic) BOOL hasBonus;
+ (id)descriptor;
@end
