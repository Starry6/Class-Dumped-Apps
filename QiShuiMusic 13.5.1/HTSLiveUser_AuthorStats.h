@interface HTSLiveUser_AuthorStats : IESLivePBBaseMessage
@property (nonatomic) q videoTotalCount;
@property (nonatomic) q videoTotalPlayCount;
@property (nonatomic) q videoTotalShareCount;
@property (nonatomic) q videoTotalSeriesCount;
@property (nonatomic) q varietyShowPlayCount;
@property (nonatomic) q videoTotalFavoriteCount;
+ (id)descriptor;
@end
