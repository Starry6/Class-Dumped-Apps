@interface GiftDetail : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSString giftName;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString giftDes;
+ (id)descriptor;
@end
