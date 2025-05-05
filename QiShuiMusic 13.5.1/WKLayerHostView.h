@interface WKLayerHostView : UIView
@property (nonatomic) I contextID;
- (unsigned int)contextID;
- (void)setContextID:;
- (id)layerHost;
+ (Class)layerClass;
@end
