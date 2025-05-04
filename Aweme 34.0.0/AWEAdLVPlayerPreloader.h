@interface AWEAdLVPlayerPreloader : NSObject
@property (nonatomic) TTVideoEngine preloadEngine;
@property (nonatomic) NSString preloadKey;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPreload;
- (void)setIsPreload:;
- (id)preloadKey;
- (void)setPreloadKey:;
- (void)clearPreloader;
- (void)generatePreloadPlayControllerWithPlayerContext:preloadKey:;
- (id)preloadEngine;
- (void)setPreloadEngine:;
- (void).cxx_destruct;
@end
