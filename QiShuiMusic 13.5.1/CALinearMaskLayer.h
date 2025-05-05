@interface CALinearMaskLayer : CALayer
@property (nonatomic) ^{CGColor=} foregroundColor;
@property (nonatomic) <CALinearMaskLayerDelegate><CALayerDelegate> delegate;
- (id)foregroundColor;
- (void)setForegroundColor:;
- (id)_copyRenderLayer:layerFlags:commitFlags:;
- (void)drawInLinearMaskContext:;
+ (id)defaultValueForKey:;
@end
