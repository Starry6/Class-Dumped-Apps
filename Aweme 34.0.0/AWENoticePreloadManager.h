@interface AWENoticePreloadManager : NSObject
@property (nonatomic) NSDictionary preloadListDataControllers;
- (id)preloadListDataControllers;
- (void)setPreloadListDataControllers:;
- (void)updateLastestActionTimeWithPreloadInfo:;
- (id)init;
- (void)dealloc;
- (id)mutableCopy;
- (id)copy;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
