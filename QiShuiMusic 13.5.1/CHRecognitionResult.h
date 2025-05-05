@interface CHRecognitionResult : NSObject
@property (nonatomic) double score;
- (double)score;
- (void)setScore:;
- (id)initWithScore:;
- (id)description;
@end
