@interface HMDJSONToken : NSObject
@property (nonatomic) NSInteger tokenType;
@property (nonatomic) NSString tokenValue;
@property (nonatomic) q tokenLength;
- (void)setTokenLength:;
- (id)initWithTokenType:tokenValue:;
- (long long)tokenLength;
- (void)setTokenType:;
- (void).cxx_destruct;
- (int)tokenType;
- (id)tokenValue;
- (void)setTokenValue:;
@end
