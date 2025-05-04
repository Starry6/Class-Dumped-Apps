@interface AWESearchVisionImageTextSearchManager : NSObject
@property (nonatomic) NSString userLastQuery;
@property (nonatomic) double userLastQueryTimestamp;
@property (nonatomic) BOOL imageTextEnable;
@property (nonatomic) BOOL currentSearchReleateQuery;
- (id)getUserLastQueryWithStartTime:;
- (void)recordUserLastQuery:;
- (void)setImageTextEnable:;
- (BOOL)imageTextEnable;
- (void)setUserLastQuery:;
- (void)setUserLastQueryTimestamp:;
- (double)userLastQueryTimestamp;
- (id)userLastQuery;
- (BOOL)currentSearchReleateQuery;
- (id)middlePageSuggestLastUserQuery;
- (void)setCurrentSearchReleateQuery:;
- (void).cxx_destruct;
+ (BOOL)getVisionImageTextSearchV2Enable;
+ (BOOL)getVisionImageTextSearchEnable;
+ (id)shareInstance;
@end
