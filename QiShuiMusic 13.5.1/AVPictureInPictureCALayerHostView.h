@interface AVPictureInPictureCALayerHostView : UIView
@property (nonatomic) CALayerHost layer;
- (id)initWithFrame:;
+ (Class)layerClass;
@end
