@interface AWECanvasConfigImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configWithPublishModel:;
- (void)constructPublishModel:canvasSource:mediaContainerView:;
- (id)videoCanvasSizeWithPublishModel:;
- (id)sourceWithPublishModel:mediaContainerView:;
@end
