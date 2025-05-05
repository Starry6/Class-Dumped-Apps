@interface FBSceneSnapshot : NSObject
@property (nonatomic) FBSceneSnapshotContext context;
@property (nonatomic) BOOL hasProtectedContent;
@property (nonatomic) IOSurface IOSurface;
@property (nonatomic) IOSurface fallbackIOSurface;
@property (nonatomic) ^{CGImage=} CGImage;
- (id)context;
- (BOOL)hasProtectedContent;
- (id)CGImage;
- (id)fallbackIOSurface;
- (id)_collectLayersToSnapshotFromScene:withSnapshotContext:rootContext:;
- (id)initWithScene:snapshotContext:;
- (void).cxx_destruct;
- (id)IOSurface;
- (id)_baseTransformForSnapshotContext:rootContext:;
- (BOOL)capture;
@end
