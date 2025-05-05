@interface scoredModel : NSObject
@property (nonatomic) double score;
@property (nonatomic) NSString modelKey;
- (double)score;
- (long long)compare:;
- (void)setScore:;
- (void).cxx_destruct;
- (id)initWithModelKey:score:;
- (id)modelKey;
- (void)setModelKey:;
@end
