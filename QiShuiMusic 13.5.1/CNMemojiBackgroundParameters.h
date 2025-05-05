@interface CNMemojiBackgroundParameters : NSObject
@property (nonatomic) CNMemojiBackgroundColor contentColor;
- (void)setContentColor:;
- (id)contentColor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithColorDescription:;
- (long long)numberOfLayers;
- (long long)numberOfColorsForLayer:;
- (id)colorAtIndex:forLayer:;
- (id)backgroundLayerColorForIndex:;
- (id)colorLayerColorForIndex:;
- (id)topGradientLayerColorForIndex:;
- (double)locationForColorAtIndex:forLayer:;
- (id)startPointForLayerAtIndex:;
- (id)endPointForLayerAtIndex:;
+ (id)defaultBackgroundColorDescription;
@end
