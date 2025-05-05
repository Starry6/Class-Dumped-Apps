@interface IOSurfaceMemoryPool : NSObject
@property (nonatomic) Q poolId;
- (id)initWithProperties:;
- (void)dealloc;
- (unsigned long long)poolId;
- (int)flush:;
- (int)ensureMemory:;
- (id)copyDebugInfo;
@end
