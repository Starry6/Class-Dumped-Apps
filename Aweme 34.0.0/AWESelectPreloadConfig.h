@interface AWESelectPreloadConfig : NSObject
@property (nonatomic) NSNumber displayPercent;
@property (nonatomic) NSNumber preloadSize;
@property (nonatomic) BOOL banPreload;
@property (nonatomic) BOOL wifiOnly;
@property (nonatomic) BOOL startWhenScrollToTop;
- (id)preloadSize;
- (void)setPreloadSize:;
- (BOOL)wifiOnly;
- (void)setWifiOnly:;
- (void)setBanPreload:;
- (void)setDisplayPercent:;
- (void)setStartWhenScrollToTop:;
- (id)displayPercent;
- (BOOL)banPreload;
- (BOOL)startWhenScrollToTop;
- (id)defaultConfig;
- (void).cxx_destruct;
@end
