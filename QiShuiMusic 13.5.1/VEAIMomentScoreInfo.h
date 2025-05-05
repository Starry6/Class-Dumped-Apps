@interface VEAIMomentScoreInfo : NSObject
@property (nonatomic) float score;
@property (nonatomic) float faceScore;
@property (nonatomic) float qualityScore;
@property (nonatomic) float sharpnessScore;
@property (nonatomic) double timeStamp;
@property (nonatomic) float meaninglessScore;
@property (nonatomic) float portraitScore;
- (float)meaninglessScore;
- (void)setMeaninglessScore:;
- (void)setPortraitScore:;
- (void)setSharpnessScore:;
- (float)sharpnessScore;
- (float)qualityScore;
- (float)score;
- (void)setScore:;
- (double)timeStamp;
- (void)setTimeStamp:;
- (float)faceScore;
- (void)setFaceScore:;
- (float)portraitScore;
- (void)setQualityScore:;
@end
