@interface AWEMVChannelLaunchDataFetchInfo : NSObject
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) BOOL fetchResult;
@property (nonatomic) double fetchBeginTime;
@property (nonatomic) double fetchDoneTime;
@property (nonatomic) double fetchDuration;
- (void)setIsPrefetch:;
- (double)fetchBeginTime;
- (void)setFetchBeginTime:;
- (double)fetchDoneTime;
- (void)setFetchDoneTime:;
- (BOOL)isFromCache;
- (id)init;
- (BOOL)fetchResult;
- (void)setIsFromCache:;
- (void)setFetchResult:;
- (double)fetchDuration;
- (BOOL)isPrefetch;
@end
