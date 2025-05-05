@interface MDLScene : NSObject
@property (nonatomic) NSArray objects;
- (id)init;
- (void)dealloc;
- (void)addObject:;
- (id)objects;
- (void)clear;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)acquireLockGuard;
- (void)releaseLockGuard:;
- (id)hitTestRayFrom:withDirection:usingCamera:;
- (BOOL)castRayFrom:withDirection:usingCamera:result:;
- (id)raytraceSceneWithCamera:reflection:irradiance:size:;
@end
