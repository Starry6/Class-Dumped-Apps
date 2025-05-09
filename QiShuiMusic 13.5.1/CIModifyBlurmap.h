@interface CIModifyBlurmap : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputPersonAlpha;
@property (nonatomic) CIImage inputHairAlpha;
@property (nonatomic) CIImage inputFaceMaskDeltaImage;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputDistanceAdd;
@property (nonatomic) NSNumber inputApertureScaling;
@property (nonatomic) NSNumber inputRelativeApertureScalingStrength;
@property (nonatomic) NSNumber inputSmoothstepMin;
@property (nonatomic) NSNumber inputSmoothstepMax;
@property (nonatomic) NSNumber inputMaxBlur;
@property (nonatomic) NSNumber inputPersonDistance;
@property (nonatomic) NSNumber inputPersonThreshold;
@property (nonatomic) CIVector inputPersonAdditive;
@property (nonatomic) CIVector inputPersonSubtractive;
@property (nonatomic) NSNumber inputPersonMaxBlur;
@property (nonatomic) NSNumber inputHairDistance;
@property (nonatomic) NSNumber inputHairThreshold;
@property (nonatomic) CIVector inputHairAdditive;
@property (nonatomic) CIVector inputHairSubtractive;
@property (nonatomic) NSNumber inputHairMaxBlur;
@property (nonatomic) NSNumber inputProtectBodyStrength;
@property (nonatomic) CIVector inputLeftEyeX;
@property (nonatomic) CIVector inputLeftEyeY;
@property (nonatomic) CIVector inputRightEyeX;
@property (nonatomic) CIVector inputRightEyeY;
@property (nonatomic) CIVector inputFaceMidPointX;
@property (nonatomic) CIVector inputFaceMidPointY;
@property (nonatomic) NSNumber inputEyeProtectionMaxFaces;
@property (nonatomic) NSNumber inputEyeProtectionFaceWeightsSmoothStepMin;
@property (nonatomic) NSNumber inputEyeProtectionFaceWeightsSmoothStepMax;
@property (nonatomic) NSNumber inputEyeProtectionOvalDimsDistanceScale;
@property (nonatomic) NSNumber inputEyeProtectionOvalDimsDistanceOffset;
@property (nonatomic) NSNumber inputEyeProtectionOvalDimsRadiusHorizontal;
@property (nonatomic) NSNumber inputEyeProtectionOvalDimsRadiusVertical;
@property (nonatomic) NSNumber inputEyeProtectionOvalFallOffSmoothStepMin;
@property (nonatomic) NSNumber inputEyeProtectionOvalFallOffSmoothStepMax;
@property (nonatomic) NSNumber inputEyeProtectionPersonMaskSmoothStepMin;
@property (nonatomic) NSNumber inputEyeProtectionPersonMaskSmoothStepMax;
@property (nonatomic) NSNumber inputEyeProtectionPreventStrength;
@property (nonatomic) NSNumber inputEyeProtectionSubtractiveMaxBlur;
@property (nonatomic) NSNumber inputEyeProtectionSubtractiveApertureScaling;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputApertureScaling;
- (id)inputMaxBlur;
- (void)setInputApertureScaling:;
- (void)setInputMaxBlur:;
- (id)inputDistanceAdd;
- (void)setInputDistanceAdd:;
- (id)inputPersonAlpha;
- (void)setInputPersonAlpha:;
- (id)inputHairAlpha;
- (void)setInputHairAlpha:;
- (id)inputFaceMaskDeltaImage;
- (void)setInputFaceMaskDeltaImage:;
- (id)inputSmoothstepMin;
- (void)setInputSmoothstepMin:;
- (id)inputSmoothstepMax;
- (void)setInputSmoothstepMax:;
- (id)inputRelativeApertureScalingStrength;
- (void)setInputRelativeApertureScalingStrength:;
- (id)inputPersonDistance;
- (void)setInputPersonDistance:;
- (id)inputPersonThreshold;
- (void)setInputPersonThreshold:;
- (id)inputPersonAdditive;
- (void)setInputPersonAdditive:;
- (id)inputPersonSubtractive;
- (void)setInputPersonSubtractive:;
- (id)inputPersonMaxBlur;
- (void)setInputPersonMaxBlur:;
- (id)inputHairDistance;
- (void)setInputHairDistance:;
- (id)inputHairThreshold;
- (void)setInputHairThreshold:;
- (id)inputHairAdditive;
- (void)setInputHairAdditive:;
- (id)inputHairSubtractive;
- (void)setInputHairSubtractive:;
- (id)inputHairMaxBlur;
- (void)setInputHairMaxBlur:;
- (id)inputProtectBodyStrength;
- (void)setInputProtectBodyStrength:;
- (id)inputLeftEyeX;
- (void)setInputLeftEyeX:;
- (id)inputLeftEyeY;
- (void)setInputLeftEyeY:;
- (id)inputRightEyeX;
- (void)setInputRightEyeX:;
- (id)inputRightEyeY;
- (void)setInputRightEyeY:;
- (id)inputFaceMidPointX;
- (void)setInputFaceMidPointX:;
- (id)inputFaceMidPointY;
- (void)setInputFaceMidPointY:;
- (id)inputEyeProtectionMaxFaces;
- (void)setInputEyeProtectionMaxFaces:;
- (id)inputEyeProtectionFaceWeightsSmoothStepMin;
- (void)setInputEyeProtectionFaceWeightsSmoothStepMin:;
- (id)inputEyeProtectionFaceWeightsSmoothStepMax;
- (void)setInputEyeProtectionFaceWeightsSmoothStepMax:;
- (id)inputEyeProtectionOvalDimsDistanceScale;
- (void)setInputEyeProtectionOvalDimsDistanceScale:;
- (id)inputEyeProtectionOvalDimsDistanceOffset;
- (void)setInputEyeProtectionOvalDimsDistanceOffset:;
- (id)inputEyeProtectionOvalDimsRadiusHorizontal;
- (void)setInputEyeProtectionOvalDimsRadiusHorizontal:;
- (id)inputEyeProtectionOvalDimsRadiusVertical;
- (void)setInputEyeProtectionOvalDimsRadiusVertical:;
- (id)inputEyeProtectionOvalFallOffSmoothStepMin;
- (void)setInputEyeProtectionOvalFallOffSmoothStepMin:;
- (id)inputEyeProtectionOvalFallOffSmoothStepMax;
- (void)setInputEyeProtectionOvalFallOffSmoothStepMax:;
- (id)inputEyeProtectionPersonMaskSmoothStepMin;
- (void)setInputEyeProtectionPersonMaskSmoothStepMin:;
- (id)inputEyeProtectionPersonMaskSmoothStepMax;
- (void)setInputEyeProtectionPersonMaskSmoothStepMax:;
- (id)inputEyeProtectionPreventStrength;
- (void)setInputEyeProtectionPreventStrength:;
- (id)inputEyeProtectionSubtractiveMaxBlur;
- (void)setInputEyeProtectionSubtractiveMaxBlur:;
- (id)inputEyeProtectionSubtractiveApertureScaling;
- (void)setInputEyeProtectionSubtractiveApertureScaling:;
+ (id)customAttributes;
@end
