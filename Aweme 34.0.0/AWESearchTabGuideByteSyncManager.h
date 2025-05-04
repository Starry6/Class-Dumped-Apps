@interface AWESearchTabGuideByteSyncManager : NSObject
@property (nonatomic) NSHashTable listeners;
@property (nonatomic) BOOL isObservering;
@property (nonatomic) NSData cachedData;
- (int)byteSyncBusinessID;
- (BOOL)isObservering;
- (void)handleGuideData:;
- (void)setIsObservering:;
- (void)startObservering;
- (void)registerByteSync:;
- (void)unregisterByteSync:;
- (void)handleByteSyncCache:;
- (id)listeners;
- (id)cachedData;
- (void)setListeners:;
- (void)setCachedData:;
- (void).cxx_destruct;
+ (id)shareManager;
@end
