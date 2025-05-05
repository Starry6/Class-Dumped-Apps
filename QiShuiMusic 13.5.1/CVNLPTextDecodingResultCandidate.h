@interface CVNLPTextDecodingResultCandidate : NSObject
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSString fullString;
@property (nonatomic) double score;
@property (nonatomic) double activationScore;
- (double)score;
- (void)setScore:;
- (void).cxx_destruct;
- (id)tokens;
- (id)fullString;
- (id)initWithTokens:score:activationScore:;
- (double)activationScore;
- (void)setActivationScore:;
@end
