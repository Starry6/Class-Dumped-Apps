@interface AWESearchElementReusePool : NSObject
@property (nonatomic) AWESearchElementReuseConfig config;
@property (nonatomic) NSMutableDictionary reusePool;
- (void)clearReusePool;
- (id)initWithReuseConfig:;
- (Class)classWithIdentifier:;
- (id)dequeueReusableSearchElementWithReuseContext:;
- (void)stashReusableSearchElement:;
- (void)setConfig:;
- (id)reusePool;
- (id)config;
- (void).cxx_destruct;
- (void)setReusePool:;
+ (id)sharedInstance;
@end
