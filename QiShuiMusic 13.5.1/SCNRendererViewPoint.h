@interface SCNRendererViewPoint : NSObject
@property (nonatomic) {SCNMatrix4=ffffffffffffffff} viewMatrix;
@property (nonatomic) {SCNMatrix4=ffffffffffffffff} projectionMatrix;
@property (nonatomic) MTLRenderPassDescriptor passDescriptor;
@property (nonatomic) {?=dddddd} viewport;
- (void)dealloc;
- (id)viewport;
- (void)setViewport:;
- (id)projectionMatrix;
- (void)setProjectionMatrix:;
- (id)passDescriptor;
- (void)setPassDescriptor:;
- (id)viewMatrix;
- (void)setViewMatrix:;
@end
