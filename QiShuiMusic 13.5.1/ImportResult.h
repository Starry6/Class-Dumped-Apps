@interface ImportResult : NSObject
@property (nonatomic) NSString repoName;
@property (nonatomic) double costInit;
@property (nonatomic) double cost;
@property (nonatomic) q keyCount;
@property (nonatomic) Q state;
- (double)costInit;
- (id)repoName;
- (void)setCostInit:;
- (void)setRepoName:;
- (void)setState:;
- (double)cost;
- (unsigned long long)state;
- (void).cxx_destruct;
- (long long)keyCount;
- (void)setKeyCount:;
- (void)setCost:;
@end
