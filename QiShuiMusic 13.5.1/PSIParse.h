@interface PSIParse : NSObject
@property (nonatomic) Q numberOfTokens;
@property (nonatomic) PSIDateFilter dateFilter;
@property (nonatomic) NSArray datedTokens;
- (id)initWithToken:;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateTokensUsingBlock:;
- (id)initWithTokens:fromString:;
- (unsigned long long)numberOfTokens;
- (id)tokenAtIndex:;
- (id)datedTokens;
- (id)parseByReplacingTokenAtIndex:withToken:;
- (id)parseByReplacingTokensInRange:withTokens:;
- (id)descriptionWithToken:;
- (id)dateFilter;
- (void)setDateFilter:;
@end
