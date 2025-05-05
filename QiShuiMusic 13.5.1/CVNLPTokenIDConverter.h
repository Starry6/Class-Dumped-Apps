@interface CVNLPTokenIDConverter : NSObject
@property (nonatomic) I bosTokenID;
@property (nonatomic) I eosTokenID;
@property (nonatomic) I unkTokenID;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithResource:andTokenType:;
- (void)enumerateTokenIDsForText:withBlock:;
- (unsigned int)bosTokenID;
- (unsigned int)eosTokenID;
- (unsigned int)unkTokenID;
@end
