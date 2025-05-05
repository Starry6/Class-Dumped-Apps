@interface SFLocalCompletionMatch : WBSURLCompletionMatch
@property (nonatomic) NSString originalURLString;
@property (nonatomic) NSString title;
@property (nonatomic) NSString userVisibleURLString;
@property (nonatomic) q matchLocation;
- (id)title;
- (void).cxx_destruct;
- (id)userVisibleURLString;
- (id)initWithCompletionMatch:;
- (long long)matchLocation;
- (id)originalURLString;
@end
