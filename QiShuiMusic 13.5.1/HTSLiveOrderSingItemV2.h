@interface HTSLiveOrderSingItemV2 : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser orderUser;
@property (nonatomic) BOOL hasOrderUser;
@property (nonatomic) HTSLiveUser giftSender;
@property (nonatomic) BOOL hasGiftSender;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSInteger microphoneType;
@property (nonatomic) q giftId;
@property (nonatomic) q giftDiamondCount;
@property (nonatomic) HTSLiveImage orderSingGiftIcon;
@property (nonatomic) BOOL hasOrderSingGiftIcon;
+ (id)descriptor;
@end
