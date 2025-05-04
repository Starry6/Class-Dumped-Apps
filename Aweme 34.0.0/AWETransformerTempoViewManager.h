@interface AWETransformerTempoViewManager : NSObject
@property (nonatomic) _TtC8TempoiOS11TempoEngine engine;
@property (nonatomic) NSMutableDictionary tempoViewCache;
- (id)tempoCacheViewWithCardType:scene:;
- (void)fetchTempoViewWithTemplateURL:cardType:scene:data:constraintWidth:completion:;
- (void)inner_preloadTempoTemplateURLs:;
- (id)tempoViewCache;
- (void)setTempoViewCache:;
- (id)init;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
- (void)removeCache:;
- (void)setupEngine;
+ (void)preloadTempoTemplateIfNeeded;
+ (id)tempoViewCacheKeyWithCardType:scene:;
+ (id)sharedInstance;
@end
