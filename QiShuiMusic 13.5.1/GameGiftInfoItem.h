@interface GameGiftInfoItem : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSString rankListURL;
+ (id)descriptor;
@end
