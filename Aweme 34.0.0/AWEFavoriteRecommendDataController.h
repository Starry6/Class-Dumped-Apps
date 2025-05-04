@interface AWEFavoriteRecommendDataController : NSObject
@property (nonatomic) NSArray dataSource;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isFromFansTool;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setIsFromFansTool:;
- (void)updateCoverWithAwemeModel:callback:;
- (BOOL)isFromFansTool;
- (void)refreshRecommendFavoriteListCallback:;
- (void)closeRecommendCreateFavoriteList;
- (void)coverImageForFirstRecommendItemCallback:;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
+ (BOOL)shouldShowRecommendCreateFavoriteBaseJudgment;
+ (BOOL)shouldRequestRecommendCreateFavoriteList;
@end
