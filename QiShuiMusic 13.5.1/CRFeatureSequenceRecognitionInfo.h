@interface CRFeatureSequenceRecognitionInfo : NSObject
@property (nonatomic) CRTextFeature textFeature;
@property (nonatomic) float scale;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGSize=dd} featureImageSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rotatedROI;
@property (nonatomic) q orientationAdjustment;
@property (nonatomic) double orientationConfidence;
@property (nonatomic) NSString orientationOutputResult;
@property (nonatomic) NSString sequenceScript;
@property (nonatomic) NSString sequenceScriptOutputResult;
@property (nonatomic) NSObject<CRTextRecognizerDecodingTransientResult> transientDecodingResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setScale:;
- (void)setBounds:;
- (void).cxx_destruct;
- (id)bounds;
- (float)scale;
- (id)textFeature;
- (void)setTextFeature:;
- (id)sequenceScriptOutputResult;
- (void)setSequenceScriptOutputResult:;
- (id)featureImageSize;
- (void)setFeatureImageSize:;
- (id)rotatedROI;
- (void)setRotatedROI:;
- (long long)orientationAdjustment;
- (void)setOrientationAdjustment:;
- (double)orientationConfidence;
- (void)setOrientationConfidence:;
- (id)orientationOutputResult;
- (void)setOrientationOutputResult:;
- (id)sequenceScript;
- (void)setSequenceScript:;
- (id)transientDecodingResult;
- (void)setTransientDecodingResult:;
+ (id)infoForFeature:scale:bounds:featureImageSize:rotatedROI:;
@end
