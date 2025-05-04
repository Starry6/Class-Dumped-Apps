@interface AWEDCFeedCellImageElementResourceReusePool : NSObject
@property (nonatomic) NSMutableArray resourceArray;
@property (nonatomic) NSMutableDictionary resourceDict;
@property (nonatomic) q reuseCount;
- (id)resourceArray;
- (void)setResourceArray:;
- (id)resourceDict;
- (void)updateResourceView:;
- (long long)reuseCount;
- (id)initWithReuseCount:;
- (id)resourceViewByKey:;
- (void)addResourceView:byKey:;
- (void)setResourceDict:;
- (void)setReuseCount:;
- (id)init;
- (void).cxx_destruct;
@end
