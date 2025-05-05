@interface VPVRSpace : NSObject
@property (nonatomic) Q spaceType;
@property (nonatomic) <MTLBuffer> vertexBuffer;
@property (nonatomic) Q vertexCount;
@property (nonatomic) {?=[4]} orientation;
- (void)createSpaceWithType:configuration:;
- (id)initWithSpaceType:configuration:;
- (unsigned long long)spaceType;
- (void)updateOrientationWithPitch:yaw:roll:;
- (void)dealloc;
- (id)orientation;
- (unsigned long long)vertexCount;
- (void).cxx_destruct;
- (id)vertexBuffer;
@end
