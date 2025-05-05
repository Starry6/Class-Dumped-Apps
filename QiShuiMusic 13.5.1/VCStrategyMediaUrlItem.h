@interface VCStrategyMediaUrlItem : NSObject
@property (nonatomic) NSDictionary info;
@property (nonatomic) @? preloadEnd;
@property (nonatomic) @? preloadCanceled;
@property (nonatomic) @? preloadDidStart;
@property (nonatomic) @? preloadProgress;
- (id)preloadCanceled;
- (id)preloadDidStart;
- (id)preloadProgress;
- (id)preloadEnd;
- (void)setPreloadCanceled:;
- (void)setPreloadDidStart:;
- (void)setPreloadEnd:;
- (void)setPreloadProgress:;
- (id)initWithInfo:;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)info;
@end
