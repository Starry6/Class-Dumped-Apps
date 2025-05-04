@interface AWEGrouponEmptyCardPreloadConfig : NSObject
@property (nonatomic) BOOL launchEnabled;
@property (nonatomic) BOOL grouponEnabled;
@property (nonatomic) double preloadInterval;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSNumber transformerCardCacheCount;
@property (nonatomic) NSNumber feedCardCacheCount;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setPreloadInterval:;
- (double)preloadInterval;
- (BOOL)grouponEnabled;
- (id)transformerCardCacheCount;
- (id)feedCardCacheCount;
- (void)setLaunchEnabled:;
- (void)setGrouponEnabled:;
- (void)setTransformerCardCacheCount:;
- (void)setFeedCardCacheCount:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (BOOL)launchEnabled;
@end
