@interface IESMMAlgorithmResultEffectBachAfterEffectDataInfo : NSObject
@property (nonatomic) NSInteger time;
@property (nonatomic) float score;
@property (nonatomic) float face_score;
@property (nonatomic) float quality_score;
@property (nonatomic) float sharepness_score;
@property (nonatomic) float meaningless_score;
@property (nonatomic) float portrait_score;
- (float)face_score;
- (float)meaningless_score;
- (float)portrait_score;
- (float)quality_score;
- (void)setFace_score:;
- (void)setMeaningless_score:;
- (void)setPortrait_score:;
- (void)setQuality_score:;
- (void)setSharepness_score:;
- (float)sharepness_score;
- (void)setTime:;
- (id)init;
- (int)time;
- (float)score;
- (void)setScore:;
@end
