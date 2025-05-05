@interface BDMannorSceneManager : NSObject
@property (nonatomic) NSMutableDictionary map;
- (id)layoutContextForScene:;
- (void)registerAdContext:contextHandler:;
- (void)unregisterAdContenxt:;
- (id)init;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
+ (id)sharedInstance;
@end
