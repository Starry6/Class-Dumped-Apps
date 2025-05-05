@interface HTSLiveSeasonBasicInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger seasonType;
@property (nonatomic) NSString seasonTitle;
+ (id)descriptor;
@end
