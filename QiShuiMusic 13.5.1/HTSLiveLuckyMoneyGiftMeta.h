@interface HTSLiveLuckyMoneyGiftMeta : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString describe;
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger diamondCount;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
