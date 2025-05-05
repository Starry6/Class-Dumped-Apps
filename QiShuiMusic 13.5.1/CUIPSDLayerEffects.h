@interface CUIPSDLayerEffects : NSObject
@property (nonatomic) BOOL visible;
@property (nonatomic) double effectScale;
@property (nonatomic) NSMutableDictionary effectList;
- (id)init;
- (BOOL)visible;
- (void)setVisible:;
- (void)dealloc;
- (void)setEffectScale:;
- (double)effectScale;
- (id)dropShadow;
- (id)colorOverlay;
- (void)addLayerEffectComponent:;
- (id)effectList;
- (void)setEffectList:;
@end
