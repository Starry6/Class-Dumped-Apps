@interface MKIconStyle : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIImage image;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)image;
- (id)initWithStyleAttributes:isHybridMap:;
- (void)_setColorAndImages;
- (id)iconForModifiers:;
- (void)registerImage:darkMode:;
- (BOOL)_elevationForIcons;
@end
