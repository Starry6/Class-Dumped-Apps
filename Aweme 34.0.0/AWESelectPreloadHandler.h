@interface AWESelectPreloadHandler : NSObject
@property (nonatomic) NSString preloadScene;
@property (nonatomic) AWESelectPreloadConfig preloadConfig;
@property (nonatomic) <AWESelectPreloadHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preloadConfig;
- (void)setPreloadScene:;
- (id)preloadScene;
- (void)setPreloadConfig:;
- (void)cancelPreload;
- (void)selectItemAtIndexPath:referString:;
- (void)preloadDataWithModel:completion:;
- (long long)videoPreloadSize;
- (id)initWithPreloadScene:preloadConfig:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)handlerWithPreloadScene:preloadSize:banPreload:delegate:;
+ (id)handlerWithPreloadScene:preloadConfig:;
@end
