@interface IESLiveEZDanmakuReuseViewPool : NSObject
@property (nonatomic) NSMutableDictionary reusableViewsMap;
- (id)getViewArrayWithSpirit:;
- (id)hashKeyForSpirit:;
- (void)loadDanmakuViewForSpirit:;
- (void)poolDrain;
- (id)reusableViewsMap;
- (void)setReusableViewsMap:;
- (void)unloadDanmakuViewForSpirit:;
- (id)init;
- (void).cxx_destruct;
+ (id)pool;
@end
