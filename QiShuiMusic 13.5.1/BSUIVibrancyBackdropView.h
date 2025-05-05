@interface BSUIVibrancyBackdropView : UIView
@property (nonatomic) CABackdropLayer backdropLayer;
- (id)backdropLayer;
- (BOOL)_shouldAnimatePropertyWithKey:;
+ (Class)layerClass;
@end
