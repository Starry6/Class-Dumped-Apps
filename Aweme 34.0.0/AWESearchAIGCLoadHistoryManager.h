@interface AWESearchAIGCLoadHistoryManager : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) q roundNum;
- (void)setRoundNum:;
- (long long)roundNum;
- (BOOL)checkNeedWhenDisplayWithViewModel:;
- (BOOL)enableLoading;
- (void)completeHistoryLoadWithRound:state:;
- (id)init;
- (BOOL)isLoading;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)beginLoading;
- (void)setIsLoading:;
@end
