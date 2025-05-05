@interface BWMetalColorCubeRendererParameters : NSObject
@property (nonatomic) BWColorLookupCache colorLookupCache;
@property (nonatomic) NSData foregroundColorLookupTable;
@property (nonatomic) NSData backgroundColorLookupTable;
@property (nonatomic) CIFilter colorFilter;
@property (nonatomic) s type;
@property (nonatomic) float interpolationFractionComplete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (int)prepareForRenderingWithInputVideoFormat:;
- (id)foregroundColorLookupTable;
- (short)type;
- (id)colorLookupCache;
- (id)backgroundColorLookupTable;
- (void)updateByInterpolatingFromParameters:toParameters:withFractionComplete:;
- (float)interpolationFractionComplete;
- (id)copyWithZone:;
- (void)setColorFilter:;
- (id)colorFilter;
- (void)setForegroundColorLookupTable:;
- (void)setBackgroundColorLookupTable:;
- (id)initWithColorFilter:colorLookupCache:;
@end
