@interface ByteRTCExpressionDetectInfo : NSObject
@property (nonatomic) float age;
@property (nonatomic) float boyProb;
@property (nonatomic) float attractive;
@property (nonatomic) float happyScore;
@property (nonatomic) float sadScore;
@property (nonatomic) float angryScore;
@property (nonatomic) float surpriseScore;
@property (nonatomic) float arousal;
@property (nonatomic) float valence;
- (float)boyProb;
- (float)happyScore;
- (void)setAngryScore:;
- (void)setAttractive:;
- (void)setBoyProb:;
- (void)setHappyScore:;
- (void)setSadScore:;
- (void)setSurpriseScore:;
- (float)attractive;
- (float)sadScore;
- (float)angryScore;
- (float)surpriseScore;
- (float)age;
- (void)setAge:;
- (float)valence;
- (void)setValence:;
- (float)arousal;
- (void)setArousal:;
@end
