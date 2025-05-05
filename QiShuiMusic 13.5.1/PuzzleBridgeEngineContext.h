@interface PuzzleBridgeEngineContext : NSObject
@property (nonatomic) NSMutableArray globalMethods;
@property (nonatomic) NSMutableDictionary cachedDict;
- (id)bridgeMethodWithName:;
- (id)cachedDict;
- (id)globalMethods;
- (BOOL)isExistMethodWithName:;
- (void)setCachedDict:;
- (void)setGlobalMethods:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
