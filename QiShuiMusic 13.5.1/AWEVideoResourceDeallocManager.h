@interface AWEVideoResourceDeallocManager : NSObject
@property (nonatomic) NSMutableArray resourcesToDealloc;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL shouldStartTrimmer;
- (void)addResourceObject:;
- (id)resourcesToDealloc;
- (void)setResourcesToDealloc:;
- (void)setShouldStartTrimmer:;
- (BOOL)shouldStartTrimmer;
- (id)init;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
+ (id)sharedInstance;
@end
