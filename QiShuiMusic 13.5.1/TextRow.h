@interface TextRow : NSObject
@property (nonatomic) NSMutableArray mutableTokens;
@property (nonatomic) double cachedScore;
@property (nonatomic) NSArray tokens;
@property (nonatomic) Q tokenCount;
@property (nonatomic) NSString string;
@property (nonatomic) double score;
@property (nonatomic) NSArray features;
- (id)string;
- (id)init;
- (double)score;
- (unsigned long long)tokenCount;
- (void)addToken:;
- (void).cxx_destruct;
- (id)features;
- (id)tokens;
- (id)copyWithZone:;
- (double)cachedScore;
- (void)setCachedScore:;
- (id)mutableTokens;
- (void)setMutableTokens:;
@end
