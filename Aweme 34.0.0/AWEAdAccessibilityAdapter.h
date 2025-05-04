@interface AWEAdAccessibilityAdapter : NSObject
@property (nonatomic) double currentScale;
- (double)getLongPressPanelAdaptedFontSizeWithOriginSize:;
- (id)getAdaptedFontOfSize:;
- (id)getAdaptedFontOfSize:weight:;
- (id)init;
- (double)currentScale;
@end
