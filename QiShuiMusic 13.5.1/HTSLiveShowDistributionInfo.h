@interface HTSLiveShowDistributionInfo : IESLivePBBaseMessage
@property (nonatomic) NSString recommendText;
@property (nonatomic) HTSLiveEpisodeStartHighLight modelMatchedHl;
@property (nonatomic) BOOL hasModelMatchedHl;
+ (id)descriptor;
@end
