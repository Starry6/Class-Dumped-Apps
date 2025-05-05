@interface NLDataInstanceLocator : NSObject
@property (nonatomic) Q instanceIndex;
@property (nonatomic) {_NSRange=QQ} rangeOfCharacters;
@property (nonatomic) {_NSRange=QQ} rangeOfTokens;
- (id)description;
- (id)initWithInstanceIndex:rangeOfCharacters:rangeOfTokens:;
- (unsigned long long)instanceIndex;
- (id)rangeOfCharacters;
- (id)rangeOfTokens;
@end
