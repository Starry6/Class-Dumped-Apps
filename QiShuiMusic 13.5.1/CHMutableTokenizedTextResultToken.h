@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken
@property (nonatomic) NSString string;
@property (nonatomic) NSIndexSet strokeIndexes;
@property (nonatomic) I wordID;
@property (nonatomic) double recognitionScore;
@property (nonatomic) double combinedScore;
@property (nonatomic) double alignmentScore;
@property (nonatomic) Q properties;
@property (nonatomic) q substrokeCount;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (void)setProperties:;
- (void)setString:;
- (void)setBounds:;
- (id)copyWithZone:;
- (void)setWordID:;
- (void)setCombinedScore:;
- (void)setStrokeIndexes:;
- (void)setRecognitionScore:;
- (void)setAlignmentScore:;
- (void)setSubstrokeCount:;
- (void)appendToken:;
@end
