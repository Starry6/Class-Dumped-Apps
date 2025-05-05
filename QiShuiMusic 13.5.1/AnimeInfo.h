@interface AnimeInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger barType;
@property (nonatomic) NSInteger auraType;
@property (nonatomic) NSString normalBarURL;
@property (nonatomic) NSString buffBarURL;
@property (nonatomic) NSString stealTowerBarURL;
@property (nonatomic) NSString curBarURL;
@property (nonatomic) NSString curAuraURL;
+ (id)descriptor;
@end
