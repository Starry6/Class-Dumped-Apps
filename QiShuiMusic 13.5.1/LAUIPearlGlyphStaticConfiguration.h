@interface LAUIPearlGlyphStaticConfiguration : NSObject
@property (nonatomic) q initialStyle;
@property (nonatomic) q pathStyle;
@property (nonatomic) double lineThicknessScale;
@property (nonatomic) double checkmarkThicknessScale;
- (id)init;
- (long long)initialStyle;
- (void)setInitialStyle:;
- (long long)pathStyle;
- (void)setPathStyle:;
- (double)lineThicknessScale;
- (void)setLineThicknessScale:;
- (double)checkmarkThicknessScale;
- (void)setCheckmarkThicknessScale:;
+ (id)createDefaultConfiguration;
+ (id)createSystemApertureConfiguration;
@end
