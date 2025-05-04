@interface AWEGrouponTransformerLynxViewManager : NSObject
@property (nonatomic) NSMutableDictionary sceneDict;
- (void)setSceneDict:;
- (id)sceneDict;
- (id)lynxViewWithCardType:scene:;
- (void)cacheLynxView:scene:cardType:;
- (id)cacheKeyWithScene:cardType:;
- (id)lynxViewsWithScene:;
- (void)clearCacheWithScene:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
