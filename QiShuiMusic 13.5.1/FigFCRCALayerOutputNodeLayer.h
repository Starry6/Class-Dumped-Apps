@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer
- (void)setPosition:;
- (id)actionForLayer:forKey:;
- (id)init;
- (void)dealloc;
- (void)setNodeSeparated:;
- (void)addAnimation:forKey:;
- (void)_addPositionAnimationToLayer:usingAnimation:forKey:;
- (void)_addBoundsAnimationToLayer:usingAnimation:forKey:;
- (void)setContents:;
- (void)setNodeOptions:forKeyPath:;
- (void)setBounds:;
- (void)setCornerRadius:;
- (void)setWindowOpacity:;
@end
