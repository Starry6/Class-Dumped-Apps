@interface AWEVideoResourceDeallocManager : NSObject
@property (nonatomic) NSMutableArray resourcesToDealloc;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL shouldStartTrimmer;
- (void)setResourcesToDealloc:;
- (void)setShouldStartTrimmer:;
- (id)resourcesToDealloc;
- (BOOL)shouldStartTrimmer;
- (void)addResourceObject:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
