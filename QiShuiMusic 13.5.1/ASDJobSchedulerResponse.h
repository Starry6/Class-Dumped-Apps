@interface ASDJobSchedulerResponse : ASDRequestResponse
@property (nonatomic) NSArray bucketNames;
@property (nonatomic) NSArray currentItems;
@property (nonatomic) NSArray hardFailureItems;
@property (nonatomic) q maxItemCount;
@property (nonatomic) NSArray nextItems;
@property (nonatomic) NSArray skippedItems;
@property (nonatomic) NSArray softFailureItems;
- (id)initWithItems:;
- (id)init;
- (long long)maxItemCount;
- (void)setMaxItemCount:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)bucketNames;
- (void)setBucketNames:;
- (id)currentItems;
- (id)hardFailureItems;
- (void)setHardFailureItems:;
- (id)nextItems;
- (void)setNextItems:;
- (id)skippedItems;
- (void)setSkippedItems:;
- (id)softFailureItems;
- (void)setSoftFailureItems:;
+ (BOOL)supportsSecureCoding;
@end
