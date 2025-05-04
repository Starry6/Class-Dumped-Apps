@interface AWESearchKeyWordModel : NSString
@property (nonatomic) NSString mainWord;
@property (nonatomic) NSString gsWord;
@property (nonatomic) NSString unionWord;
- (id)mainWord;
- (void)setMainWord:;
- (id)unionWord;
- (id)gsWord;
- (void)setGsWord:;
- (id)initWithKeyWordString:toBeCut:;
- (void)getCharacters:range:;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)initWithCharactersNoCopy:length:freeWhenDone:;
@end
