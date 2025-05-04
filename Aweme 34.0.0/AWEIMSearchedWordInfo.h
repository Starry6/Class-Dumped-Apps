@interface AWEIMSearchedWordInfo : NSObject
@property (nonatomic) NSString searchedWord;
@property (nonatomic) double time;
- (id)searchedWord;
- (void)setSearchedWord:;
- (double)time;
- (void)setTime:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
