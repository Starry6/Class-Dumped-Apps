@interface GiftInfo : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSString giftName;
@property (nonatomic) NSString giftImgURL;
@property (nonatomic) q diamondCount;
+ (id)descriptor;
@end
