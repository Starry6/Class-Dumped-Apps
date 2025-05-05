@interface CAFlipBook : NSObject
@property (nonatomic) I contextId;
@property (nonatomic) BOOL wantsTransform;
@property (nonatomic) BOOL inverted;
@property (nonatomic) Q maximumMemoryUsageForDiagnostics;
- (void)purge;
- (BOOL)wantsTransform;
- (id)cancel;
- (void)dealloc;
- (void)setContextId:;
- (unsigned int)contextId;
- (BOOL)isInverted;
- (id)description;
- (unsigned long long)memoryUsage;
- (id)renderForTime:options:userInfo:error:;
- (id)frameAtTime:;
- (id)copyCurrentFrame;
- (id)activeFrames;
- (void)collect;
- (void)setInverted:;
- (unsigned long long)maximumMemoryUsageForDiagnostics;
- (void)setMaximumMemoryUsageForDiagnostics:;
- (void)setWantsTransform:;
- (id)_frameById:;
- (void)_collectFlipBookFrames;
- (id)_initWithDisplayId:options:;
@end
