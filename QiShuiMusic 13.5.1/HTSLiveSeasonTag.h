@interface HTSLiveSeasonTag : IESLivePBBaseMessage
@property (nonatomic) q seasonId;
@property (nonatomic) NSString seasonTag;
@property (nonatomic) NSString seasonIdStr;
+ (id)descriptor;
@end
