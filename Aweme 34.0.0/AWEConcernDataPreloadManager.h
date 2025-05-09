@interface AWEConcernDataPreloadManager : NSObject
@property (nonatomic) AWEListDataController preloadDataController;
@property (nonatomic) BOOL hasLoadInitFeedData;
@property (nonatomic) BOOL isPredict;
@property (nonatomic) AWESmartFeedDataPreloadResult fetchResult;
@property (nonatomic) Q preloadHitType;
@property (nonatomic) AWEPerfLoadRequest perfRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initFetchWithCompletion:;
- (BOOL)hasLoadInitFeedData;
- (unsigned long long)preloadHitType;
- (void)setPreloadHitType:;
- (void)setHasLoadInitFeedData:;
- (void)setIsPredict:;
- (void)setPerfRequest:;
- (id)preloadDataController;
- (void)cleanDataSource;
- (BOOL)isPredict;
- (void)trackTapPreloadHitWithHitType:;
- (void)preloadInitFeedDataWithPredict:;
- (id)perfRequest;
- (void)setPreloadDataController:;
- (id)fetchResult;
- (void).cxx_destruct;
- (void)setFetchResult:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
