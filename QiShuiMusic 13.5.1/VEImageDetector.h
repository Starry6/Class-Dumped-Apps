@interface VEImageDetector : NSObject
@property (nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> effectHandle;
@property (nonatomic) HTSGLContext context;
- (long long)detectPhoto:withAlgorithm:;
- (id)detectPhoto:withAlgorithm:withAlgorithmType:;
- (BOOL)detectPhotoContent:withAlgorithm:;
- (id)effectHandle;
- (void)initEffect;
- (void)setEffectHandle:;
- (id)init;
- (void)dealloc;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
