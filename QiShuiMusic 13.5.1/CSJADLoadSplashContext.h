@interface CSJADLoadSplashContext : NSObject
@property (nonatomic) NSString splashFinalType;
@property (nonatomic) q renderControl;
@property (nonatomic) q renderSequence;
@property (nonatomic) q realRenderSequence;
@property (nonatomic) q splashCacheErrorCode;
@property (nonatomic) BOOL isZoomOut;
@property (nonatomic) BOOL isPreload;
- (id)splashFinalType;
- (BOOL)isPreload;
- (BOOL)isZoomOut;
- (long long)realRenderSequence;
- (long long)renderControl;
- (long long)renderSequence;
- (void)setIsPreload:;
- (void)setIsZoomOut:;
- (void)setRealRenderSequence:;
- (void)setRenderControl:;
- (void)setRenderSequence:;
- (void)setSplashCacheErrorCode:;
- (void)setSplashFinalType:;
- (long long)splashCacheErrorCode;
- (void).cxx_destruct;
@end
