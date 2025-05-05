@interface IESLiveShopInfo : IESLivePBBaseMessage
@property (nonatomic) NSString shopURL;
@property (nonatomic) NSString shopName;
@property (nonatomic) HTSLiveImage shopLogo;
@property (nonatomic) BOOL hasShopLogo;
@property (nonatomic) HTSLiveImage brandTag;
@property (nonatomic) BOOL hasBrandTag;
@property (nonatomic) double score;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSString sales;
@property (nonatomic) NSString levelStr;
@property (nonatomic) q shopType;
+ (id)descriptor;
@end
