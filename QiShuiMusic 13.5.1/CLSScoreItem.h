@interface CLSScoreItem : CLSActivityItem
@property (nonatomic) double score;
@property (nonatomic) double maxScore;
- (double)score;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setScore:;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (double)maxScore;
- (void)setMaxScore:;
- (id)initWithIdentifier:title:;
- (id)initWithIdentifier:title:score:maxScore:;
+ (BOOL)supportsSecureCoding;
@end
