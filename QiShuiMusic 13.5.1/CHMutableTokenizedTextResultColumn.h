@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn
@property (nonatomic) NSArray tokenRows;
- (id)copyWithZone:;
- (id)initWithTokenRows:;
- (void)setTokenRows:;
- (long long)addTokenRowWithTokens:;
- (void)setTokenRowWithTokens:atIndex:;
- (void)removeTokenRowAtIndex:;
- (void)sortTokenRows;
- (id)_mutableTokenRows;
@end
