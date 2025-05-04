@interface AWELegacySearchKeyWord : NSString
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString errorWord;
- (void)setErrorWord:;
- (id)errorWord;
- (BOOL)isEqualToString:;
- (void)getCharacters:range:;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)initWithCharactersNoCopy:length:freeWhenDone:;
- (id)keyword;
- (void)setKeyword:;
+ (id)stringWithKeyword:errorWord:;
@end
