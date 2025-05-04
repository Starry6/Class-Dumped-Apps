@interface AWEMusicSelectSearchStayHelper : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString requestId;
@property (nonatomic) double beginTime;
@property (nonatomic) double stayTime;
@property (nonatomic) BOOL didEnterBackground;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)searchId;
- (void)setSearchId:;
- (void)setStayTime:;
- (double)stayTime;
- (id)initWithEnterFrom:;
- (void)beginDisplaySearch:requestId:;
- (void)endDisplay;
- (BOOL)didEnterBackground;
- (void)setDidEnterBackground:;
- (double)beginTime;
- (void)setBeginTime:;
- (void).cxx_destruct;
- (void)setRequestId:;
- (void)applicationDidBecomeActive;
- (id)requestId;
- (void)applicationWillResignActive;
@end
