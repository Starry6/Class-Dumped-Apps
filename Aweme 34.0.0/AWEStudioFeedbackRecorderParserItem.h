@interface AWEStudioFeedbackRecorderParserItem : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) q count;
@property (nonatomic) q successCount;
@property (nonatomic) q cancelCount;
@property (nonatomic) NSMutableArray failInfoArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)failInfoArray;
- (void)setFailInfoArray:;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)successCount;
- (void)setCancelCount:;
- (long long)cancelCount;
- (void)setSuccessCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
