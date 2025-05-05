@interface NLLexiconCompletion : NSObject
- (double)score;
- (unsigned int)tokenID;
- (id)description;
- (id)initWithTokenID:score:;
@end
