@interface PRLexiconCorrection : NSObject
@property (nonatomic) I tokenID;
@property (nonatomic) double score;
@property (nonatomic) Q errorType;
- (double)score;
- (unsigned int)tokenID;
- (id)description;
- (unsigned long long)errorType;
- (id)initWithTokenID:score:errorType:;
@end
