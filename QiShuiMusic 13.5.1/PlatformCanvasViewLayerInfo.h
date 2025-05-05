@interface PlatformCanvasViewLayerInfo : NSObject
@property (nonatomic) CAEAGLLayer layer;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) C scaleMode;
- (id)initWithLayer:scaleMode:;
- (void)setLayer:;
- (id)layer;
- (void)setWidth:;
- (id)initWithLayer:;
- (double)height;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setScaleMode:;
- (unsigned char)scaleMode;
@end
