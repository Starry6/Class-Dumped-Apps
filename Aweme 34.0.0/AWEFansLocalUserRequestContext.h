@interface AWEFansLocalUserRequestContext : NSObject
@property (nonatomic) q source;
@property (nonatomic) q maxTime;
@property (nonatomic) q lastCursor;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL isFullAndNotFirstPage;
- (void)setLastCursor:;
- (long long)lastCursor;
- (BOOL)isFullAndNotFirstPage;
- (void)setIsFullAndNotFirstPage:;
- (void)setMaxTime:;
- (long long)maxTime;
- (long long)source;
- (void)setSource:;
- (BOOL)isRetry;
- (void)setIsRetry:;
@end
