@interface PRLexiconCompletion : NSObject
@property (nonatomic) I tokenID;
@property (nonatomic) double score;
- (double)score;
- (unsigned int)tokenID;
- (id)description;
- (id)initWithTokenID:score:;
@end
