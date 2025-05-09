@interface CADisplayMode : NSObject
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) double pixelAspectRatio;
@property (nonatomic) double refreshRate;
@property (nonatomic) BOOL isVirtual;
@property (nonatomic) BOOL highBandwidth;
@property (nonatomic) NSString colorMode;
@property (nonatomic) BOOL colorModeIsYCbCr;
@property (nonatomic) Q preferredScale;
@property (nonatomic) NSString hdrMode;
@property (nonatomic) NSString colorGamut;
@property (nonatomic) Q bitDepth;
@property (nonatomic) BOOL isVRR;
@property (nonatomic) Q internalRepresentation;
- (id)hdrMode;
- (void)dealloc;
- (unsigned long long)bitDepth;
- (id)_mode;
- (void)_setPreferredUIScale:;
- (unsigned long long)hash;
- (id)colorGamut;
- (void)_setWidth:height:;
- (id)colorMode;
- (BOOL)colorModeIsYCbCr;
- (double)refreshRate;
- (unsigned long long)height;
- (unsigned long long)internalRepresentation;
- (unsigned long long)width;
- (id)_display;
- (BOOL)isVirtual;
- (BOOL)isVRR;
- (id)description;
- (id)_initWithMode:display:rates:;
- (unsigned long long)preferredScale;
- (BOOL)isHighBandwidth;
- (BOOL)isEqual:;
- (double)pixelAspectRatio;
+ (id)_displayModeWithMode:display:rates:;
@end
