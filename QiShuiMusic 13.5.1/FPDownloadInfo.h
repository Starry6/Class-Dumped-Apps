@interface FPDownloadInfo : FPActionOperationInfo
@property (nonatomic) BOOL recursively;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)recursively;
- (void)setRecursively:;
+ (BOOL)supportsSecureCoding;
@end
