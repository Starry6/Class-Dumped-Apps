@interface AVApplePortraitMetadata : NSObject
@property (nonatomic) float apertureFocalRatio;
@property (nonatomic) float minimumApertureFocalRatio;
@property (nonatomic) float maximumApertureFocalRatio;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) float luminanceNoiseAmplitude;
@property (nonatomic) NSInteger faceOrientation;
@property (nonatomic) NSData faceObservationsData;
@property (nonatomic) NSIndexSet indexesOfShallowDepthOfFieldObservations;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} focusRectangle;
@property (nonatomic) I SDOFRenderingVersion;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)faceOrientation;
- (float)portraitLightingEffectStrength;
- (id)initWithInternal:;
- (float)apertureFocalRatio;
- (float)minimumApertureFocalRatio;
- (float)maximumApertureFocalRatio;
- (float)luminanceNoiseAmplitude;
- (id)faceObservationsData;
- (id)indexesOfShallowDepthOfFieldObservations;
- (id)focusRectangle;
- (unsigned int)SDOFRenderingVersion;
- (id)initWithPortraitMetadataDictionary:;
+ (BOOL)supportsSecureCoding;
@end
