@interface CSJADLoadDurationManager : NSObject
@property (nonatomic) NSMapTable weakCache;
@property (nonatomic) Q APPActiveType;
- (id)ADLoadContextWithSlot:;
- (unsigned long long)APPActiveType;
- (void)createADLoadContextWithSlot:;
- (void)removeADLoadContextWithSlot:;
- (void)setWeakCache:;
- (void)startTrackAPPActiveType;
- (void)stopTrackAPPActiveType;
- (id)init;
- (void)_applicationDidEnterBackground;
- (id)weakCache;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
